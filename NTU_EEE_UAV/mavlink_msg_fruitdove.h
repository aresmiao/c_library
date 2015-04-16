// MESSAGE FRUITDOVE PACKING

#define MAVLINK_MSG_ID_FRUITDOVE 232

typedef struct __mavlink_fruitdove_t
{
 uint64_t usec; ///< Timestamp (microseconds, synced to UNIX time or since system boot)
 float gps_raw_x; ///< gps raw ned projection X position
 float gps_raw_y; ///< gps raw ned projection Y position
 float gps_raw_z; ///< gps raw ned projection Z position
 int32_t gps_raw_lat_int; ///< gps raw latitude
 int32_t gps_raw_lon_int; ///< gps raw longitude
 int32_t gps_raw_alt_int; ///< gps raw altitude
 float local_ned_x; ///< X Position in final fused ned local
 float local_ned_y; ///< Y Position in final fused ned local
 float local_ned_z; ///< Z Position in final fused ned local
 uint16_t eph; ///< GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 uint16_t epv; ///< GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 uint8_t satellites_visible; ///< Number of satellites visible. If unknown, set to 255
} mavlink_fruitdove_t;

#define MAVLINK_MSG_ID_FRUITDOVE_LEN 49
#define MAVLINK_MSG_ID_232_LEN 49

#define MAVLINK_MSG_ID_FRUITDOVE_CRC 201
#define MAVLINK_MSG_ID_232_CRC 201



#define MAVLINK_MESSAGE_INFO_FRUITDOVE { \
	"FRUITDOVE", \
	13, \
	{  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_fruitdove_t, usec) }, \
         { "gps_raw_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_fruitdove_t, gps_raw_x) }, \
         { "gps_raw_y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_fruitdove_t, gps_raw_y) }, \
         { "gps_raw_z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_fruitdove_t, gps_raw_z) }, \
         { "gps_raw_lat_int", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_fruitdove_t, gps_raw_lat_int) }, \
         { "gps_raw_lon_int", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_fruitdove_t, gps_raw_lon_int) }, \
         { "gps_raw_alt_int", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_fruitdove_t, gps_raw_alt_int) }, \
         { "local_ned_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_fruitdove_t, local_ned_x) }, \
         { "local_ned_y", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_fruitdove_t, local_ned_y) }, \
         { "local_ned_z", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_fruitdove_t, local_ned_z) }, \
         { "eph", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_fruitdove_t, eph) }, \
         { "epv", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_fruitdove_t, epv) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_fruitdove_t, satellites_visible) }, \
         } \
}


/**
 * @brief Pack a fruitdove message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param gps_raw_x gps raw ned projection X position
 * @param gps_raw_y gps raw ned projection Y position
 * @param gps_raw_z gps raw ned projection Z position
 * @param gps_raw_lat_int gps raw latitude
 * @param gps_raw_lon_int gps raw longitude
 * @param gps_raw_alt_int gps raw altitude
 * @param eph GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 * @param epv GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 * @param local_ned_x X Position in final fused ned local
 * @param local_ned_y Y Position in final fused ned local
 * @param local_ned_z Z Position in final fused ned local
 * @param satellites_visible Number of satellites visible. If unknown, set to 255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fruitdove_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float gps_raw_x, float gps_raw_y, float gps_raw_z, int32_t gps_raw_lat_int, int32_t gps_raw_lon_int, int32_t gps_raw_alt_int, uint16_t eph, uint16_t epv, float local_ned_x, float local_ned_y, float local_ned_z, uint8_t satellites_visible)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FRUITDOVE_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, gps_raw_x);
	_mav_put_float(buf, 12, gps_raw_y);
	_mav_put_float(buf, 16, gps_raw_z);
	_mav_put_int32_t(buf, 20, gps_raw_lat_int);
	_mav_put_int32_t(buf, 24, gps_raw_lon_int);
	_mav_put_int32_t(buf, 28, gps_raw_alt_int);
	_mav_put_float(buf, 32, local_ned_x);
	_mav_put_float(buf, 36, local_ned_y);
	_mav_put_float(buf, 40, local_ned_z);
	_mav_put_uint16_t(buf, 44, eph);
	_mav_put_uint16_t(buf, 46, epv);
	_mav_put_uint8_t(buf, 48, satellites_visible);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#else
	mavlink_fruitdove_t packet;
	packet.usec = usec;
	packet.gps_raw_x = gps_raw_x;
	packet.gps_raw_y = gps_raw_y;
	packet.gps_raw_z = gps_raw_z;
	packet.gps_raw_lat_int = gps_raw_lat_int;
	packet.gps_raw_lon_int = gps_raw_lon_int;
	packet.gps_raw_alt_int = gps_raw_alt_int;
	packet.local_ned_x = local_ned_x;
	packet.local_ned_y = local_ned_y;
	packet.local_ned_z = local_ned_z;
	packet.eph = eph;
	packet.epv = epv;
	packet.satellites_visible = satellites_visible;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FRUITDOVE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FRUITDOVE_LEN, MAVLINK_MSG_ID_FRUITDOVE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
}

/**
 * @brief Pack a fruitdove message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param gps_raw_x gps raw ned projection X position
 * @param gps_raw_y gps raw ned projection Y position
 * @param gps_raw_z gps raw ned projection Z position
 * @param gps_raw_lat_int gps raw latitude
 * @param gps_raw_lon_int gps raw longitude
 * @param gps_raw_alt_int gps raw altitude
 * @param eph GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 * @param epv GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 * @param local_ned_x X Position in final fused ned local
 * @param local_ned_y Y Position in final fused ned local
 * @param local_ned_z Z Position in final fused ned local
 * @param satellites_visible Number of satellites visible. If unknown, set to 255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fruitdove_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float gps_raw_x,float gps_raw_y,float gps_raw_z,int32_t gps_raw_lat_int,int32_t gps_raw_lon_int,int32_t gps_raw_alt_int,uint16_t eph,uint16_t epv,float local_ned_x,float local_ned_y,float local_ned_z,uint8_t satellites_visible)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FRUITDOVE_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, gps_raw_x);
	_mav_put_float(buf, 12, gps_raw_y);
	_mav_put_float(buf, 16, gps_raw_z);
	_mav_put_int32_t(buf, 20, gps_raw_lat_int);
	_mav_put_int32_t(buf, 24, gps_raw_lon_int);
	_mav_put_int32_t(buf, 28, gps_raw_alt_int);
	_mav_put_float(buf, 32, local_ned_x);
	_mav_put_float(buf, 36, local_ned_y);
	_mav_put_float(buf, 40, local_ned_z);
	_mav_put_uint16_t(buf, 44, eph);
	_mav_put_uint16_t(buf, 46, epv);
	_mav_put_uint8_t(buf, 48, satellites_visible);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#else
	mavlink_fruitdove_t packet;
	packet.usec = usec;
	packet.gps_raw_x = gps_raw_x;
	packet.gps_raw_y = gps_raw_y;
	packet.gps_raw_z = gps_raw_z;
	packet.gps_raw_lat_int = gps_raw_lat_int;
	packet.gps_raw_lon_int = gps_raw_lon_int;
	packet.gps_raw_alt_int = gps_raw_alt_int;
	packet.local_ned_x = local_ned_x;
	packet.local_ned_y = local_ned_y;
	packet.local_ned_z = local_ned_z;
	packet.eph = eph;
	packet.epv = epv;
	packet.satellites_visible = satellites_visible;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FRUITDOVE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FRUITDOVE_LEN, MAVLINK_MSG_ID_FRUITDOVE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
}

/**
 * @brief Encode a fruitdove struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fruitdove C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fruitdove_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fruitdove_t* fruitdove)
{
	return mavlink_msg_fruitdove_pack(system_id, component_id, msg, fruitdove->usec, fruitdove->gps_raw_x, fruitdove->gps_raw_y, fruitdove->gps_raw_z, fruitdove->gps_raw_lat_int, fruitdove->gps_raw_lon_int, fruitdove->gps_raw_alt_int, fruitdove->eph, fruitdove->epv, fruitdove->local_ned_x, fruitdove->local_ned_y, fruitdove->local_ned_z, fruitdove->satellites_visible);
}

/**
 * @brief Encode a fruitdove struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fruitdove C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fruitdove_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fruitdove_t* fruitdove)
{
	return mavlink_msg_fruitdove_pack_chan(system_id, component_id, chan, msg, fruitdove->usec, fruitdove->gps_raw_x, fruitdove->gps_raw_y, fruitdove->gps_raw_z, fruitdove->gps_raw_lat_int, fruitdove->gps_raw_lon_int, fruitdove->gps_raw_alt_int, fruitdove->eph, fruitdove->epv, fruitdove->local_ned_x, fruitdove->local_ned_y, fruitdove->local_ned_z, fruitdove->satellites_visible);
}

/**
 * @brief Send a fruitdove message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param gps_raw_x gps raw ned projection X position
 * @param gps_raw_y gps raw ned projection Y position
 * @param gps_raw_z gps raw ned projection Z position
 * @param gps_raw_lat_int gps raw latitude
 * @param gps_raw_lon_int gps raw longitude
 * @param gps_raw_alt_int gps raw altitude
 * @param eph GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 * @param epv GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 * @param local_ned_x X Position in final fused ned local
 * @param local_ned_y Y Position in final fused ned local
 * @param local_ned_z Z Position in final fused ned local
 * @param satellites_visible Number of satellites visible. If unknown, set to 255
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fruitdove_send(mavlink_channel_t chan, uint64_t usec, float gps_raw_x, float gps_raw_y, float gps_raw_z, int32_t gps_raw_lat_int, int32_t gps_raw_lon_int, int32_t gps_raw_alt_int, uint16_t eph, uint16_t epv, float local_ned_x, float local_ned_y, float local_ned_z, uint8_t satellites_visible)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FRUITDOVE_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, gps_raw_x);
	_mav_put_float(buf, 12, gps_raw_y);
	_mav_put_float(buf, 16, gps_raw_z);
	_mav_put_int32_t(buf, 20, gps_raw_lat_int);
	_mav_put_int32_t(buf, 24, gps_raw_lon_int);
	_mav_put_int32_t(buf, 28, gps_raw_alt_int);
	_mav_put_float(buf, 32, local_ned_x);
	_mav_put_float(buf, 36, local_ned_y);
	_mav_put_float(buf, 40, local_ned_z);
	_mav_put_uint16_t(buf, 44, eph);
	_mav_put_uint16_t(buf, 46, epv);
	_mav_put_uint8_t(buf, 48, satellites_visible);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, buf, MAVLINK_MSG_ID_FRUITDOVE_LEN, MAVLINK_MSG_ID_FRUITDOVE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, buf, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
#else
	mavlink_fruitdove_t packet;
	packet.usec = usec;
	packet.gps_raw_x = gps_raw_x;
	packet.gps_raw_y = gps_raw_y;
	packet.gps_raw_z = gps_raw_z;
	packet.gps_raw_lat_int = gps_raw_lat_int;
	packet.gps_raw_lon_int = gps_raw_lon_int;
	packet.gps_raw_alt_int = gps_raw_alt_int;
	packet.local_ned_x = local_ned_x;
	packet.local_ned_y = local_ned_y;
	packet.local_ned_z = local_ned_z;
	packet.eph = eph;
	packet.epv = epv;
	packet.satellites_visible = satellites_visible;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, (const char *)&packet, MAVLINK_MSG_ID_FRUITDOVE_LEN, MAVLINK_MSG_ID_FRUITDOVE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, (const char *)&packet, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_FRUITDOVE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fruitdove_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float gps_raw_x, float gps_raw_y, float gps_raw_z, int32_t gps_raw_lat_int, int32_t gps_raw_lon_int, int32_t gps_raw_alt_int, uint16_t eph, uint16_t epv, float local_ned_x, float local_ned_y, float local_ned_z, uint8_t satellites_visible)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, gps_raw_x);
	_mav_put_float(buf, 12, gps_raw_y);
	_mav_put_float(buf, 16, gps_raw_z);
	_mav_put_int32_t(buf, 20, gps_raw_lat_int);
	_mav_put_int32_t(buf, 24, gps_raw_lon_int);
	_mav_put_int32_t(buf, 28, gps_raw_alt_int);
	_mav_put_float(buf, 32, local_ned_x);
	_mav_put_float(buf, 36, local_ned_y);
	_mav_put_float(buf, 40, local_ned_z);
	_mav_put_uint16_t(buf, 44, eph);
	_mav_put_uint16_t(buf, 46, epv);
	_mav_put_uint8_t(buf, 48, satellites_visible);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, buf, MAVLINK_MSG_ID_FRUITDOVE_LEN, MAVLINK_MSG_ID_FRUITDOVE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, buf, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
#else
	mavlink_fruitdove_t *packet = (mavlink_fruitdove_t *)msgbuf;
	packet->usec = usec;
	packet->gps_raw_x = gps_raw_x;
	packet->gps_raw_y = gps_raw_y;
	packet->gps_raw_z = gps_raw_z;
	packet->gps_raw_lat_int = gps_raw_lat_int;
	packet->gps_raw_lon_int = gps_raw_lon_int;
	packet->gps_raw_alt_int = gps_raw_alt_int;
	packet->local_ned_x = local_ned_x;
	packet->local_ned_y = local_ned_y;
	packet->local_ned_z = local_ned_z;
	packet->eph = eph;
	packet->epv = epv;
	packet->satellites_visible = satellites_visible;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, (const char *)packet, MAVLINK_MSG_ID_FRUITDOVE_LEN, MAVLINK_MSG_ID_FRUITDOVE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRUITDOVE, (const char *)packet, MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE FRUITDOVE UNPACKING


/**
 * @brief Get field usec from fruitdove message
 *
 * @return Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_fruitdove_get_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field gps_raw_x from fruitdove message
 *
 * @return gps raw ned projection X position
 */
static inline float mavlink_msg_fruitdove_get_gps_raw_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field gps_raw_y from fruitdove message
 *
 * @return gps raw ned projection Y position
 */
static inline float mavlink_msg_fruitdove_get_gps_raw_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field gps_raw_z from fruitdove message
 *
 * @return gps raw ned projection Z position
 */
static inline float mavlink_msg_fruitdove_get_gps_raw_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field gps_raw_lat_int from fruitdove message
 *
 * @return gps raw latitude
 */
static inline int32_t mavlink_msg_fruitdove_get_gps_raw_lat_int(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field gps_raw_lon_int from fruitdove message
 *
 * @return gps raw longitude
 */
static inline int32_t mavlink_msg_fruitdove_get_gps_raw_lon_int(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field gps_raw_alt_int from fruitdove message
 *
 * @return gps raw altitude
 */
static inline int32_t mavlink_msg_fruitdove_get_gps_raw_alt_int(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field eph from fruitdove message
 *
 * @return GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_fruitdove_get_eph(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field epv from fruitdove message
 *
 * @return GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_fruitdove_get_epv(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field local_ned_x from fruitdove message
 *
 * @return X Position in final fused ned local
 */
static inline float mavlink_msg_fruitdove_get_local_ned_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field local_ned_y from fruitdove message
 *
 * @return Y Position in final fused ned local
 */
static inline float mavlink_msg_fruitdove_get_local_ned_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field local_ned_z from fruitdove message
 *
 * @return Z Position in final fused ned local
 */
static inline float mavlink_msg_fruitdove_get_local_ned_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field satellites_visible from fruitdove message
 *
 * @return Number of satellites visible. If unknown, set to 255
 */
static inline uint8_t mavlink_msg_fruitdove_get_satellites_visible(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Decode a fruitdove message into a struct
 *
 * @param msg The message to decode
 * @param fruitdove C-struct to decode the message contents into
 */
static inline void mavlink_msg_fruitdove_decode(const mavlink_message_t* msg, mavlink_fruitdove_t* fruitdove)
{
#if MAVLINK_NEED_BYTE_SWAP
	fruitdove->usec = mavlink_msg_fruitdove_get_usec(msg);
	fruitdove->gps_raw_x = mavlink_msg_fruitdove_get_gps_raw_x(msg);
	fruitdove->gps_raw_y = mavlink_msg_fruitdove_get_gps_raw_y(msg);
	fruitdove->gps_raw_z = mavlink_msg_fruitdove_get_gps_raw_z(msg);
	fruitdove->gps_raw_lat_int = mavlink_msg_fruitdove_get_gps_raw_lat_int(msg);
	fruitdove->gps_raw_lon_int = mavlink_msg_fruitdove_get_gps_raw_lon_int(msg);
	fruitdove->gps_raw_alt_int = mavlink_msg_fruitdove_get_gps_raw_alt_int(msg);
	fruitdove->local_ned_x = mavlink_msg_fruitdove_get_local_ned_x(msg);
	fruitdove->local_ned_y = mavlink_msg_fruitdove_get_local_ned_y(msg);
	fruitdove->local_ned_z = mavlink_msg_fruitdove_get_local_ned_z(msg);
	fruitdove->eph = mavlink_msg_fruitdove_get_eph(msg);
	fruitdove->epv = mavlink_msg_fruitdove_get_epv(msg);
	fruitdove->satellites_visible = mavlink_msg_fruitdove_get_satellites_visible(msg);
#else
	memcpy(fruitdove, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_FRUITDOVE_LEN);
#endif
}
