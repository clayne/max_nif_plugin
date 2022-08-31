/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIGRAVITY_H_
#define _NIGRAVITY_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiParticleModifier.h"
namespace Niflib {

class NiGravity;
typedef Ref<NiGravity> NiGravityRef;

/*! A particle modifier; applies a gravitational field on the particles. */
class NiGravity : public NiParticleModifier {
public:
	/*! Constructor */
	NIFLIB_API NiGravity();

	/*! Destructor */
	NIFLIB_API virtual ~NiGravity();

	/*!
	 * A constant value which uniquly identifies objects of this type.
	 */
	NIFLIB_API static const Type TYPE;

	/*!
	 * A factory function used during file reading to create an instance of this type of object.
	 * \return A pointer to a newly allocated instance of this type of object.
	 */
	NIFLIB_API static NiObject * Create();

	/*!
	 * Summarizes the information contained in this object in English.
	 * \param[in] verbose Determines whether or not detailed information about large areas of data will be printed out.
	 * \return A string containing a summary of the information within the object in English.  This is the function that Niflyze calls to generate its analysis, so the output is the same.
	 */
	NIFLIB_API virtual string asString( bool verbose = false ) const;

	/*!
	 * Used to determine the type of a particular instance of this object.
	 * \return The type constant for the actual type of the object.
	 */
	NIFLIB_API virtual const Type & GetType() const;

	/***Begin Example Naive Implementation****

	// The strength/force of this gravity.
	// \return The current value.
	float GetForce() const;

	// The strength/force of this gravity.
	// \param[in] value The new value.
	void SetForce( float value );

	// The force field's type.
	// \return The current value.
	FieldType GetType() const;

	// The force field's type.
	// \param[in] value The new value.
	void SetType( const FieldType & value );

	// The position of the mass point relative to the particle system. (TODO: check for
	// versions <= 3.1)
	// \return The current value.
	Vector3 GetPosition() const;

	// The position of the mass point relative to the particle system. (TODO: check for
	// versions <= 3.1)
	// \param[in] value The new value.
	void SetPosition( const Vector3 & value );

	// The direction of the applied acceleration.
	// \return The current value.
	Vector3 GetDirection() const;

	// The direction of the applied acceleration.
	// \param[in] value The new value.
	void SetDirection( const Vector3 & value );

	****End Example Naive Implementation***/

	//--BEGIN MISC CUSTOM CODE--//
	//--END CUSTOM CODE--//
protected:
	/*! Unknown. */
	float unknownFloat1;
	/*! The strength/force of this gravity. */
	float force;
	/*! The force field's type. */
	FieldType type;
	/*!
	 * The position of the mass point relative to the particle system. (TODO: check for
	 * versions <= 3.1)
	 */
	Vector3 position;
	/*! The direction of the applied acceleration. */
	Vector3 direction;
public:
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info );
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const;
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info );
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual list<NiObjectRef> GetRefs() const;
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual list<NiObject *> GetPtrs() const;
};

//--BEGIN FILE FOOT CUSTOM CODE--//
//--END CUSTOM CODE--//

} //End Niflib namespace
#endif
