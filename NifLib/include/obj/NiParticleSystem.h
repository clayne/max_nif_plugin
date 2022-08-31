/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIPARTICLESYSTEM_H_
#define _NIPARTICLESYSTEM_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiParticles.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced NIF objects
class NiPSysData;
class NiPSysModifier;
class NiParticleSystem;
typedef Ref<NiParticleSystem> NiParticleSystemRef;

/*! A particle system. */
class NiParticleSystem : public NiParticles {
public:
	/*! Constructor */
	NIFLIB_API NiParticleSystem();

	/*! Destructor */
	NIFLIB_API virtual ~NiParticleSystem();

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

	// Unknown
	// \return The current value.
	Ref<NiPSysData > GetData_() const;

	// Unknown
	// \param[in] value The new value.
	void SetData_( Ref<NiPSysData > value );

	// If true, Particles are birthed into world space.  If false, Particles are
	// birthed into object space.
	// \return The current value.
	bool GetWorldSpace() const;

	// If true, Particles are birthed into world space.  If false, Particles are
	// birthed into object space.
	// \param[in] value The new value.
	void SetWorldSpace( bool value );

	// The list of particle modifiers.
	// \return The current value.
	vector<Ref<NiPSysModifier > > GetModifiers() const;

	// The list of particle modifiers.
	// \param[in] value The new value.
	void SetModifiers( const vector<Ref<NiPSysModifier > >& value );

	****End Example Naive Implementation***/

	//--BEGIN MISC CUSTOM CODE--//

	// If true, Particles are birthed into world space.  If false, Particles are
	// birthed into object space.
	// \return The current value.
	NIFLIB_API bool GetWorldSpace() const;

	// If true, Particles are birthed into world space.  If false, Particles are
	// birthed into object space.
	// \param[in] value The new value.
	NIFLIB_API void SetWorldSpace(bool value);

	// The list of particle modifiers.
	// \return The current value.
	NIFLIB_API vector<Ref<NiPSysModifier > > GetModifiers() const;

	// The list of particle modifiers.
	// \param[in] value The new value.
	NIFLIB_API void SetModifiers(const vector<Ref<NiPSysModifier > >& value);

	//--END CUSTOM CODE--//
protected:
	/*! Unknown */
	unsigned short unknownShort2;
	/*! Unknown */
	unsigned short unknownShort3;
	/*! Unknown */
	unsigned int unknownInt1;
	/*! Unknown */
	int unknownInteger4;
	/*! Unknown */
	int unknownInteger5;
	/*! Unknown */
	Ref<NiPSysData > data_;
	/*!
	 * If true, Particles are birthed into world space.  If false, Particles are
	 * birthed into object space.
	 */
	bool worldSpace;
	/*! The number of modifier references. */
	mutable unsigned int numModifiers;
	/*! The list of particle modifiers. */
	vector<Ref<NiPSysModifier > > modifiers;
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
