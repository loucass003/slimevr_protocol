// Automatically generated by the Flatbuffers compiler. Do not modify.
pub mod slimevr_protocol {
  use super::*;
  pub mod datatypes {
    use super::*;
    mod quat_generated;
    pub use self::quat_generated::*;
    mod vec_3f_generated;
    pub use self::vec_3f_generated::*;
    mod mac_address_generated;
    pub use self::mac_address_generated::*;
  } // datatypes
  pub mod firmware {
    use super::*;
    mod inbound_union_generated;
    pub use self::inbound_union_generated::*;
    mod outbound_union_generated;
    pub use self::outbound_union_generated::*;
    mod inbound_packet_generated;
    pub use self::inbound_packet_generated::*;
    mod outbound_packet_generated;
    pub use self::outbound_packet_generated::*;
    mod log_data_generated;
    pub use self::log_data_generated::*;
    mod configure_sensor_reporting_generated;
    pub use self::configure_sensor_reporting_generated::*;
    mod sensor_report_generated;
    pub use self::sensor_report_generated::*;
    mod heartbeat_request_generated;
    pub use self::heartbeat_request_generated::*;
    mod handshake_request_generated;
    pub use self::handshake_request_generated::*;
    mod device_info_request_generated;
    pub use self::device_info_request_generated::*;
    mod device_status_request_generated;
    pub use self::device_status_request_generated::*;
    mod device_status_response_generated;
    pub use self::device_status_response_generated::*;
  } // firmware
  pub mod hardware_info {
    use super::*;
    mod mcu_id_generated;
    pub use self::mcu_id_generated::*;
    mod imu_id_generated;
    pub use self::imu_id_generated::*;
    mod device_info_generated;
    pub use self::device_info_generated::*;
    mod imu_status_generated;
    pub use self::imu_status_generated::*;
    mod mcu_status_generated;
    pub use self::mcu_status_generated::*;
  } // hardware_info
  pub mod misc {
    use super::*;
    mod acknowledgement_generated;
    pub use self::acknowledgement_generated::*;
  } // misc
  pub mod server {
    use super::*;
    mod inbound_union_generated;
    pub use self::inbound_union_generated::*;
    mod outbound_union_generated;
    pub use self::outbound_union_generated::*;
    mod application_type_generated;
    pub use self::application_type_generated::*;
    mod tracker_status_generated;
    pub use self::tracker_status_generated::*;
    mod tracker_role_generated;
    pub use self::tracker_role_generated::*;
    mod filtering_type_generated;
    pub use self::filtering_type_generated::*;
    mod inbound_packet_generated;
    pub use self::inbound_packet_generated::*;
    mod outbound_packet_generated;
    pub use self::outbound_packet_generated::*;
    mod reset_request_generated;
    pub use self::reset_request_generated::*;
    mod connection_request_generated;
    pub use self::connection_request_generated::*;
    mod tracker_list_features_generated;
    pub use self::tracker_list_features_generated::*;
    mod device_status_features_generated;
    pub use self::device_status_features_generated::*;
    mod device_status_generated;
    pub use self::device_status_generated::*;
    mod trackers_list_generated;
    pub use self::trackers_list_generated::*;
    mod assign_tracker_request_generated;
    pub use self::assign_tracker_request_generated::*;
    mod steam_vrtrackers_setting_generated;
    pub use self::steam_vrtrackers_setting_generated::*;
    mod filtering_settings_generated;
    pub use self::filtering_settings_generated::*;
    mod settings_request_generated;
    pub use self::settings_request_generated::*;
    mod settings_response_generated;
    pub use self::settings_response_generated::*;
    mod change_settings_request_generated;
    pub use self::change_settings_request_generated::*;
  } // server
} // slimevr_protocol
