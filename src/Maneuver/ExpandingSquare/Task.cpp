//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Mika Okuhara                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Mika Okuhara
  namespace ExpandingSquare
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Altitude Moving Average Samples
      double altitude_average_size;
      //! Minimum altitude values to consider for average
      double min_altitude;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Maneuver
      IMC::ExpandingSquare m_maneuver;
      //! EstimatedState
      IMC::EstimatedState m_state;
      //! DesiredPath
      IMC::DesiredPath m_path;
      //! Minimum altitude holder for hstep calculation
      float m_alt_min;
      //! Predicted coverage
      double m_cov_pred;
      //! Calculated coverage with min. altitude
      double m_cov_actual_min;
      //! Current hstep in use
      double m_cur_hstep;
      //! Moving average for min. altitude  calculation
      Math::MovingAverage<float>* m_alt_avrg;
      //! Stage counter
      // unsigned int m_stage;
      
      //! Task arguments
      double vector_x;
      double vector_y;
      double m_lat;
      double m_lon;
      float m_bearing;
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_alt_min(0),
        m_cov_pred(0),
        m_cov_actual_min(0),
        m_cur_hstep(0),
        m_alt_avrg(NULL),
        vector_x(0),
        vector_y(0),
        m_lat(0),
        m_lon(0),
        m_bearing(0)
      {
        param("Altitude Moving Average Samples", m_args.altitude_average_size)
        .defaultValue("40")
        .minimumValue("5")
        .description("Number of samples to average altitude measurements (moving window size)");

        param("Minimum Altitude Value", m_args.min_altitude)
        .defaultValue("0.3")
        .minimumValue("0")
        .description("Process measured altitude values only if above this threshold");

        bindToManeuver<Task, IMC::ExpandingSquare>();
        bind<IMC::EstimatedState>(this);
      }

      //! Destructor
      virtual
      ~Task(void)
      {
        Memory::clear(m_alt_avrg);
      }

      void
      onManeuverDeactivation(void)
      {
        Memory::clear(m_alt_avrg);
      }

      void
      consume(const IMC::ExpandingSquare* maneuver)
      {
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;

        m_alt_min = -1;

        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        double lat;
        double lon;

        m_lat = maneuver->lat;
        m_lon = maneuver->lon;
        m_bearing = maneuver->bearing;

        // vector_x += 1;
        // vector_y += 1;

        // double dx = vector_x, dy = vector_y;
        // Angles::rotate(maneuver->bearing, false, dx, dy);

        // lat = maneuver->lat;
        // lon = maneuver->lon;
        // Coordinates::WGS84::displace(dx, dy, &lat, &lon);

        if (getPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        // if (m_stages_parser->getFirstPoint(&lat, &lon))
        // {
        //   signalCompletion();
        //   return;
        // }

        sendPath(lat, lon);
      }

      bool
      getPoint(double* lat, double* lon)
      {
        // const RowsStages::Stage& new_stage = m_stages[m_curr];
        // m_sabs.label = new_stage.label;

        // double adx = new_stage.x;
        // double ady = new_stage.y;

        vector_x += 1;
        vector_y += 1;

        double dx = vector_x, dy = vector_y;

        // if (maneuver->hstep != m_hstep_updated)
        // {
        //   if (m_cross_angle != 0.0)
        //     Angles::rotate(-m_cross_angle, curveLeft(), adx, ady);
        //   ady = ady * m_hstep_updated / m_hstep;
        //   if (m_cross_angle != 0.0)
        //     Angles::rotate(m_cross_angle, curveLeft(), adx, ady);
        // }

        // m_sabs.x += adx;
        // m_sabs.y += ady;

        // if (std::fabs(ady) > c_y_margin)
        // {
        //   if (std::abs(m_sabs.y) > m_width)
        //     return true;
        // }

        // Rotate according to row maneuver bearing angle
        // double dx = m_sabs.x, dy = m_sabs.y;

        Angles::rotate(m_bearing, false, dx, dy);

        // if (m_task != NULL)
        //   m_task->debug("%0.2f %0.2f -- %s", dx, dy, m_sabs.label);

        // Calculate WGS-84 coordinates and fill DesiredPath message
        *lat = m_lat;
        *lon = m_lon;
        Coordinates::WGS84::displace(dx, dy, lat, lon);

        // ++m_index;

        return false;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (m_alt_avrg == NULL)
          return;

        std::stringstream ss;
        // ss << "waypoint=" << m_stages_parser->getIndex();
        // ss << "; stage=" << m_stage;
        ss << "; minAlt=" << m_alt_min;
        // ss << "; curHstep=" << m_cur_hstep;
        // ss << "; stdHstep=" << m_cov_pred;


        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
        {
          signalProgress(pcs->eta, ss.str());
          return;
        }

        double lat;
        double lon;

        bool last_pt;
        // switch (m_stage)
        // {
        //   case 2:
        //     m_alt_min = std::min(m_alt_min, m_alt_avrg->mean());
        //     if (m_alt_min > 0)
        //     {
        //       m_cov_actual_min = 2 * m_alt_min * std::tan(m_maneuver.angaperture / 2);
        //       m_cov_actual_min = m_cov_actual_min * (1 - m_maneuver.overlap / 200.);
        //       m_cur_hstep = std::min(m_cov_pred, m_cov_actual_min);
        //       // last_pt = m_stages_parser->getNextPoint(&lat, &lon, m_cur_hstep);
        //       ss << "; calculated=" << m_cur_hstep;
        //     }
        //     else
        //     {
        //       m_cur_hstep = m_cov_pred;
        //       // last_pt = m_stages_parser->getNextPoint(&lat, &lon, m_cur_hstep);
        //       ss << "; not-calculated=" << m_cov_pred;
        //     }
        //     break;
        //   default:
        //     // last_pt = m_stages_parser->getNextPoint(&lat, &lon);
        //     break;
        // }

        last_pt = getPoint(&lat, &lon);

        signalProgress(pcs->eta, ss.str());

        m_alt_avrg->clear();
        m_alt_min = -1;

        if (last_pt)
        {
          signalCompletion();
          return;
        }

        // m_stage++;
        // unsigned num_stages = (m_maneuver.flags & IMC::ExpandingSquare::FLG_SQUARE_CURVE) ? 3 : 2;

        // if (m_stage > num_stages)
        //   m_stage = 1;

        sendPath(lat, lon);
      }

      //! Send new desired path
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
