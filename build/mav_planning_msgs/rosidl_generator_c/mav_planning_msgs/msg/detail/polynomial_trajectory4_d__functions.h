// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mav_planning_msgs:msg/PolynomialTrajectory4D.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__MSG__DETAIL__POLYNOMIAL_TRAJECTORY4_D__FUNCTIONS_H_
#define MAV_PLANNING_MSGS__MSG__DETAIL__POLYNOMIAL_TRAJECTORY4_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mav_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mav_planning_msgs/msg/detail/polynomial_trajectory4_d__struct.h"

/// Initialize msg/PolynomialTrajectory4D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mav_planning_msgs__msg__PolynomialTrajectory4D
 * )) before or use
 * mav_planning_msgs__msg__PolynomialTrajectory4D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
bool
mav_planning_msgs__msg__PolynomialTrajectory4D__init(mav_planning_msgs__msg__PolynomialTrajectory4D * msg);

/// Finalize msg/PolynomialTrajectory4D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
void
mav_planning_msgs__msg__PolynomialTrajectory4D__fini(mav_planning_msgs__msg__PolynomialTrajectory4D * msg);

/// Create msg/PolynomialTrajectory4D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mav_planning_msgs__msg__PolynomialTrajectory4D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
mav_planning_msgs__msg__PolynomialTrajectory4D *
mav_planning_msgs__msg__PolynomialTrajectory4D__create();

/// Destroy msg/PolynomialTrajectory4D message.
/**
 * It calls
 * mav_planning_msgs__msg__PolynomialTrajectory4D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
void
mav_planning_msgs__msg__PolynomialTrajectory4D__destroy(mav_planning_msgs__msg__PolynomialTrajectory4D * msg);

/// Check for msg/PolynomialTrajectory4D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
bool
mav_planning_msgs__msg__PolynomialTrajectory4D__are_equal(const mav_planning_msgs__msg__PolynomialTrajectory4D * lhs, const mav_planning_msgs__msg__PolynomialTrajectory4D * rhs);

/// Copy a msg/PolynomialTrajectory4D message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
bool
mav_planning_msgs__msg__PolynomialTrajectory4D__copy(
  const mav_planning_msgs__msg__PolynomialTrajectory4D * input,
  mav_planning_msgs__msg__PolynomialTrajectory4D * output);

/// Initialize array of msg/PolynomialTrajectory4D messages.
/**
 * It allocates the memory for the number of elements and calls
 * mav_planning_msgs__msg__PolynomialTrajectory4D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
bool
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__init(mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * array, size_t size);

/// Finalize array of msg/PolynomialTrajectory4D messages.
/**
 * It calls
 * mav_planning_msgs__msg__PolynomialTrajectory4D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
void
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__fini(mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * array);

/// Create array of msg/PolynomialTrajectory4D messages.
/**
 * It allocates the memory for the array and calls
 * mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence *
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__create(size_t size);

/// Destroy array of msg/PolynomialTrajectory4D messages.
/**
 * It calls
 * mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
void
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__destroy(mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * array);

/// Check for msg/PolynomialTrajectory4D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
bool
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__are_equal(const mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * lhs, const mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * rhs);

/// Copy an array of msg/PolynomialTrajectory4D messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_planning_msgs
bool
mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence__copy(
  const mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * input,
  mav_planning_msgs__msg__PolynomialTrajectory4D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAV_PLANNING_MSGS__MSG__DETAIL__POLYNOMIAL_TRAJECTORY4_D__FUNCTIONS_H_
