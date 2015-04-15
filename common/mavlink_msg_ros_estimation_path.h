// MESSAGE ROS_ESTIMATION_PATH PACKING

#define MAVLINK_MSG_ID_ROS_ESTIMATION_PATH 230

typedef struct __mavlink_ros_estimation_path_t
{
 uint64_t usec; ///< Timestamp (milliseconds, synced to UNIX or since system boot)
 float x; ///< x position estimation 
 float y; ///< y position estimation
 float z; ///< z position estimation
 float yaw; ///< Yaw estimation
 float vx; ///< vx position estimation
 float vy; ///< vy position estimation
 float vz; ///< vz position estimation
 float target_x; ///< target desired indoor x
 float target_y; ///< target desired indoor y
 float target_z; ///< target desired indoor z
 float target_yaw; ///< target desired indoor yaw
 int32_t flight_mode; ///< target flight mode 3:take off, 1: path, 2: land
} mavlink_ros_estimation_path_t;

#define MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN 56
#define MAVLINK_MSG_ID_230_LEN 56

#define MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC 194
#define MAVLINK_MSG_ID_230_CRC 194



#define MAVLINK_MESSAGE_INFO_ROS_ESTIMATION_PATH { \
	"ROS_ESTIMATION_PATH", \
	13, \
	{  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ros_estimation_path_t, usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ros_estimation_path_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ros_estimation_path_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ros_estimation_path_t, z) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ros_estimation_path_t, yaw) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ros_estimation_path_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ros_estimation_path_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ros_estimation_path_t, vz) }, \
         { "target_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ros_estimation_path_t, target_x) }, \
         { "target_y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ros_estimation_path_t, target_y) }, \
         { "target_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ros_estimation_path_t, target_z) }, \
         { "target_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ros_estimation_path_t, target_yaw) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_ros_estimation_path_t, flight_mode) }, \
         } \
}


/**
 * @brief Pack a ros_estimation_path message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (milliseconds, synced to UNIX or since system boot)
 * @param x x position estimation 
 * @param y y position estimation
 * @param z z position estimation
 * @param yaw Yaw estimation
 * @param vx vx position estimation
 * @param vy vy position estimation
 * @param vz vz position estimation
 * @param target_x target desired indoor x
 * @param target_y target desired indoor y
 * @param target_z target desired indoor z
 * @param target_yaw target desired indoor yaw
 * @param flight_mode target flight mode 3:take off, 1: path, 2: land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_estimation_path_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float x, float y, float z, float yaw, float vx, float vy, float vz, float target_x, float target_y, float target_z, float target_yaw, int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, vz);
	_mav_put_float(buf, 36, target_x);
	_mav_put_float(buf, 40, target_y);
	_mav_put_float(buf, 44, target_z);
	_mav_put_float(buf, 48, target_yaw);
	_mav_put_int32_t(buf, 52, flight_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#else
	mavlink_ros_estimation_path_t packet;
	packet.usec = usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.target_x = target_x;
	packet.target_y = target_y;
	packet.target_z = target_z;
	packet.target_yaw = target_yaw;
	packet.flight_mode = flight_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_ESTIMATION_PATH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
}

/**
 * @brief Pack a ros_estimation_path message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (milliseconds, synced to UNIX or since system boot)
 * @param x x position estimation 
 * @param y y position estimation
 * @param z z position estimation
 * @param yaw Yaw estimation
 * @param vx vx position estimation
 * @param vy vy position estimation
 * @param vz vz position estimation
 * @param target_x target desired indoor x
 * @param target_y target desired indoor y
 * @param target_z target desired indoor z
 * @param target_yaw target desired indoor yaw
 * @param flight_mode target flight mode 3:take off, 1: path, 2: land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_estimation_path_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float x,float y,float z,float yaw,float vx,float vy,float vz,float target_x,float target_y,float target_z,float target_yaw,int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, vz);
	_mav_put_float(buf, 36, target_x);
	_mav_put_float(buf, 40, target_y);
	_mav_put_float(buf, 44, target_z);
	_mav_put_float(buf, 48, target_yaw);
	_mav_put_int32_t(buf, 52, flight_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#else
	mavlink_ros_estimation_path_t packet;
	packet.usec = usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.target_x = target_x;
	packet.target_y = target_y;
	packet.target_z = target_z;
	packet.target_yaw = target_yaw;
	packet.flight_mode = flight_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_ESTIMATION_PATH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
}

/**
 * @brief Encode a ros_estimation_path struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ros_estimation_path C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_estimation_path_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ros_estimation_path_t* ros_estimation_path)
{
	return mavlink_msg_ros_estimation_path_pack(system_id, component_id, msg, ros_estimation_path->usec, ros_estimation_path->x, ros_estimation_path->y, ros_estimation_path->z, ros_estimation_path->yaw, ros_estimation_path->vx, ros_estimation_path->vy, ros_estimation_path->vz, ros_estimation_path->target_x, ros_estimation_path->target_y, ros_estimation_path->target_z, ros_estimation_path->target_yaw, ros_estimation_path->flight_mode);
}

/**
 * @brief Encode a ros_estimation_path struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ros_estimation_path C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_estimation_path_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ros_estimation_path_t* ros_estimation_path)
{
	return mavlink_msg_ros_estimation_path_pack_chan(system_id, component_id, chan, msg, ros_estimation_path->usec, ros_estimation_path->x, ros_estimation_path->y, ros_estimation_path->z, ros_estimation_path->yaw, ros_estimation_path->vx, ros_estimation_path->vy, ros_estimation_path->vz, ros_estimation_path->target_x, ros_estimation_path->target_y, ros_estimation_path->target_z, ros_estimation_path->target_yaw, ros_estimation_path->flight_mode);
}

/**
 * @brief Send a ros_estimation_path message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (milliseconds, synced to UNIX or since system boot)
 * @param x x position estimation 
 * @param y y position estimation
 * @param z z position estimation
 * @param yaw Yaw estimation
 * @param vx vx position estimation
 * @param vy vy position estimation
 * @param vz vz position estimation
 * @param target_x target desired indoor x
 * @param target_y target desired indoor y
 * @param target_z target desired indoor z
 * @param target_yaw target desired indoor yaw
 * @param flight_mode target flight mode 3:take off, 1: path, 2: land
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ros_estimation_path_send(mavlink_channel_t chan, uint64_t usec, float x, float y, float z, float yaw, float vx, float vy, float vz, float target_x, float target_y, float target_z, float target_yaw, int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, vz);
	_mav_put_float(buf, 36, target_x);
	_mav_put_float(buf, 40, target_y);
	_mav_put_float(buf, 44, target_z);
	_mav_put_float(buf, 48, target_yaw);
	_mav_put_int32_t(buf, 52, flight_mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, buf, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, buf, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
#else
	mavlink_ros_estimation_path_t packet;
	packet.usec = usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.target_x = target_x;
	packet.target_y = target_y;
	packet.target_z = target_z;
	packet.target_yaw = target_yaw;
	packet.flight_mode = flight_mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, (const char *)&packet, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, (const char *)&packet, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ros_estimation_path_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float x, float y, float z, float yaw, float vx, float vy, float vz, float target_x, float target_y, float target_z, float target_yaw, int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, vz);
	_mav_put_float(buf, 36, target_x);
	_mav_put_float(buf, 40, target_y);
	_mav_put_float(buf, 44, target_z);
	_mav_put_float(buf, 48, target_yaw);
	_mav_put_int32_t(buf, 52, flight_mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, buf, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, buf, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
#else
	mavlink_ros_estimation_path_t *packet = (mavlink_ros_estimation_path_t *)msgbuf;
	packet->usec = usec;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->yaw = yaw;
	packet->vx = vx;
	packet->vy = vy;
	packet->vz = vz;
	packet->target_x = target_x;
	packet->target_y = target_y;
	packet->target_z = target_z;
	packet->target_yaw = target_yaw;
	packet->flight_mode = flight_mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, (const char *)packet, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH, (const char *)packet, MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROS_ESTIMATION_PATH UNPACKING


/**
 * @brief Get field usec from ros_estimation_path message
 *
 * @return Timestamp (milliseconds, synced to UNIX or since system boot)
 */
static inline uint64_t mavlink_msg_ros_estimation_path_get_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from ros_estimation_path message
 *
 * @return x position estimation 
 */
static inline float mavlink_msg_ros_estimation_path_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from ros_estimation_path message
 *
 * @return y position estimation
 */
static inline float mavlink_msg_ros_estimation_path_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from ros_estimation_path message
 *
 * @return z position estimation
 */
static inline float mavlink_msg_ros_estimation_path_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from ros_estimation_path message
 *
 * @return Yaw estimation
 */
static inline float mavlink_msg_ros_estimation_path_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vx from ros_estimation_path message
 *
 * @return vx position estimation
 */
static inline float mavlink_msg_ros_estimation_path_get_vx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vy from ros_estimation_path message
 *
 * @return vy position estimation
 */
static inline float mavlink_msg_ros_estimation_path_get_vy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field vz from ros_estimation_path message
 *
 * @return vz position estimation
 */
static inline float mavlink_msg_ros_estimation_path_get_vz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field target_x from ros_estimation_path message
 *
 * @return target desired indoor x
 */
static inline float mavlink_msg_ros_estimation_path_get_target_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field target_y from ros_estimation_path message
 *
 * @return target desired indoor y
 */
static inline float mavlink_msg_ros_estimation_path_get_target_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field target_z from ros_estimation_path message
 *
 * @return target desired indoor z
 */
static inline float mavlink_msg_ros_estimation_path_get_target_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field target_yaw from ros_estimation_path message
 *
 * @return target desired indoor yaw
 */
static inline float mavlink_msg_ros_estimation_path_get_target_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field flight_mode from ros_estimation_path message
 *
 * @return target flight mode 3:take off, 1: path, 2: land
 */
static inline int32_t mavlink_msg_ros_estimation_path_get_flight_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  52);
}

/**
 * @brief Decode a ros_estimation_path message into a struct
 *
 * @param msg The message to decode
 * @param ros_estimation_path C-struct to decode the message contents into
 */
static inline void mavlink_msg_ros_estimation_path_decode(const mavlink_message_t* msg, mavlink_ros_estimation_path_t* ros_estimation_path)
{
#if MAVLINK_NEED_BYTE_SWAP
	ros_estimation_path->usec = mavlink_msg_ros_estimation_path_get_usec(msg);
	ros_estimation_path->x = mavlink_msg_ros_estimation_path_get_x(msg);
	ros_estimation_path->y = mavlink_msg_ros_estimation_path_get_y(msg);
	ros_estimation_path->z = mavlink_msg_ros_estimation_path_get_z(msg);
	ros_estimation_path->yaw = mavlink_msg_ros_estimation_path_get_yaw(msg);
	ros_estimation_path->vx = mavlink_msg_ros_estimation_path_get_vx(msg);
	ros_estimation_path->vy = mavlink_msg_ros_estimation_path_get_vy(msg);
	ros_estimation_path->vz = mavlink_msg_ros_estimation_path_get_vz(msg);
	ros_estimation_path->target_x = mavlink_msg_ros_estimation_path_get_target_x(msg);
	ros_estimation_path->target_y = mavlink_msg_ros_estimation_path_get_target_y(msg);
	ros_estimation_path->target_z = mavlink_msg_ros_estimation_path_get_target_z(msg);
	ros_estimation_path->target_yaw = mavlink_msg_ros_estimation_path_get_target_yaw(msg);
	ros_estimation_path->flight_mode = mavlink_msg_ros_estimation_path_get_flight_mode(msg);
#else
	memcpy(ros_estimation_path, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROS_ESTIMATION_PATH_LEN);
#endif
}
