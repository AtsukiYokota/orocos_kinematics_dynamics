/* Generated from orogen/lib/orogen/templates/typekit/typelib/Type.cpp */

#include "Types.hpp"
#include "transports/typelib/TypelibMarshaller.hpp"
#include "transports/typelib/Registration.hpp"

orogen_transports::TypelibMarshallerBase* orogen_typekits::KDL_Wrench_TypelibMarshaller(Typelib::Registry const& registry)
{
    return new orogen_transports::TypelibMarshaller< ::KDL::Wrench >("/KDL/Wrench", registry);
}



