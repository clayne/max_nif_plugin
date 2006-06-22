/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSGRAVITYSTRENGTHCTLR_H_
#define _NIPSYSGRAVITYSTRENGTHCTLR_H_

#include "APSysCtlr.h"
namespace Niflib {

#include "../gen/obj_defines.h"

class NiPSysGravityStrengthCtlr;
typedef Ref<NiPSysGravityStrengthCtlr> NiPSysGravityStrengthCtlrRef;

/*!
 * NiPSysGravityStrengthCtlr - Unknown.
 */

class NIFLIB_API NiPSysGravityStrengthCtlr : public NI_P_SYS_GRAVITY_STRENGTH_CTLR_PARENT {
public:
	NiPSysGravityStrengthCtlr();
	~NiPSysGravityStrengthCtlr();
	//Run-Time Type Information
	static const Type & TypeConst() { return TYPE; }
private:
	static const Type TYPE;
public:
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;

protected:
	NI_P_SYS_GRAVITY_STRENGTH_CTLR_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
