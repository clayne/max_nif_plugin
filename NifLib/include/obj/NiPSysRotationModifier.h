/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIPSYSROTATIONMODIFIER_H_
#define _NIPSYSROTATIONMODIFIER_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiPSysModifier.h"
namespace Niflib {

class NiPSysRotationModifier;
typedef Ref<NiPSysRotationModifier> NiPSysRotationModifierRef;

/*! Particle modifier that adds rotations to particles. */
class NiPSysRotationModifier : public NiPSysModifier {
public:
	/*! Constructor */
	NIFLIB_API NiPSysRotationModifier();

	/*! Destructor */
	NIFLIB_API virtual ~NiPSysRotationModifier();

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

	// The initial speed of rotation.
	// \return The current value.
	float GetInitialRotationSpeed() const;

	// The initial speed of rotation.
	// \param[in] value The new value.
	void SetInitialRotationSpeed( float value );

	// Adds a ranged randomness to rotation speed.
	// \return The current value.
	float GetInitialRotationSpeedVariation() const;

	// Adds a ranged randomness to rotation speed.
	// \param[in] value The new value.
	void SetInitialRotationSpeedVariation( float value );

	// Sets the intial angle for particles to be birthed in.
	// \return The current value.
	float GetInitialRotationAngle() const;

	// Sets the intial angle for particles to be birthed in.
	// \param[in] value The new value.
	void SetInitialRotationAngle( float value );

	// Adds a random range to Initial angle.
	// \return The current value.
	float GetInitialRotationAngleVariation() const;

	// Adds a random range to Initial angle.
	// \param[in] value The new value.
	void SetInitialRotationAngleVariation( float value );

	// Unknown
	// \return The current value.
	bool GetRandomRotSpeedSign() const;

	// Unknown
	// \param[in] value The new value.
	void SetRandomRotSpeedSign( bool value );

	// Unknown.
	// \return The current value.
	bool GetRandomInitialAxis() const;

	// Unknown.
	// \param[in] value The new value.
	void SetRandomInitialAxis( bool value );

	// Unknown.
	// \return The current value.
	Vector3 GetInitialAxis() const;

	// Unknown.
	// \param[in] value The new value.
	void SetInitialAxis( const Vector3 & value );

	****End Example Naive Implementation***/

	//--BEGIN MISC CUSTOM CODE--//
	//--END CUSTOM CODE--//
protected:
	/*! The initial speed of rotation. */
	float initialRotationSpeed;
	/*! Adds a ranged randomness to rotation speed. */
	float initialRotationSpeedVariation;
	/*! Sets the intial angle for particles to be birthed in. */
	float initialRotationAngle;
	/*! Adds a random range to Initial angle. */
	float initialRotationAngleVariation;
	/*! Unknown */
	bool randomRotSpeedSign;
	/*! Unknown. */
	bool randomInitialAxis;
	/*! Unknown. */
	Vector3 initialAxis;
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
