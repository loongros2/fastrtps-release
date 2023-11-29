// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file FilteringExample.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "FilteringExample.h"

#if FASTCDR_VERSION_MAJOR == 1

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace helper { namespace internal {

enum class Size {
    UInt8,
    UInt16,
    UInt32,
    UInt64,
};

constexpr Size get_size(int s) {
    return (s <= 8 ) ? Size::UInt8:
           (s <= 16) ? Size::UInt16:
           (s <= 32) ? Size::UInt32: Size::UInt64;
}

template<Size s>
struct FindTypeH;

template<>
struct FindTypeH<Size::UInt8> {
    using type = std::uint8_t;
};

template<>
struct FindTypeH<Size::UInt16> {
    using type = std::uint16_t;
};

template<>
struct FindTypeH<Size::UInt32> {
    using type = std::uint32_t;
};

template<>
struct FindTypeH<Size::UInt64> {
    using type = std::uint64_t;
};
}

template<int S>
struct FindType {
    using type = typename internal::FindTypeH<internal::get_size(S)>::type;
};
}

#define FilteringExample_max_cdr_typesize 8ULL;




FilteringExample::FilteringExample()
{
    // long m_sampleNumber
    m_sampleNumber = 0;

}

FilteringExample::~FilteringExample()
{
}

FilteringExample::FilteringExample(
        const FilteringExample& x)
{
    m_sampleNumber = x.m_sampleNumber;

}

FilteringExample::FilteringExample(
        FilteringExample&& x) noexcept
{
    m_sampleNumber = x.m_sampleNumber;

}

FilteringExample& FilteringExample::operator =(
        const FilteringExample& x)
{
    m_sampleNumber = x.m_sampleNumber;

    return *this;
}

FilteringExample& FilteringExample::operator =(
        FilteringExample&& x) noexcept
{
    m_sampleNumber = x.m_sampleNumber;

    return *this;
}

bool FilteringExample::operator ==(
        const FilteringExample& x) const
{
    return (m_sampleNumber == x.m_sampleNumber);
}

bool FilteringExample::operator !=(
        const FilteringExample& x) const
{
    return !(*this == x);
}

size_t FilteringExample::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return FilteringExample_max_cdr_typesize;
}

size_t FilteringExample::getCdrSerializedSize(
        const FilteringExample& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}


void FilteringExample::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_sampleNumber;

}

void FilteringExample::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_sampleNumber;


}


bool FilteringExample::isKeyDefined()
{
    return false;
}

void FilteringExample::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

/*!
 * @brief This function sets a value in member sampleNumber
 * @param _sampleNumber New value for member sampleNumber
 */
void FilteringExample::sampleNumber(
        int32_t _sampleNumber)
{
    m_sampleNumber = _sampleNumber;
}

/*!
 * @brief This function returns the value of member sampleNumber
 * @return Value of member sampleNumber
 */
int32_t FilteringExample::sampleNumber() const
{
    return m_sampleNumber;
}

/*!
 * @brief This function returns a reference to member sampleNumber
 * @return Reference to member sampleNumber
 */
int32_t& FilteringExample::sampleNumber()
{
    return m_sampleNumber;
}




#endif // FASTCDR_VERSION_MAJOR == 1
