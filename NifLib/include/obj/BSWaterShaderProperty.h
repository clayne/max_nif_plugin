/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSWATERSHADERPROPERTY_H_
#define _BSWATERSHADERPROPERTY_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiProperty.h"
namespace Niflib {

class BSWaterShaderProperty;
typedef Ref<BSWaterShaderProperty> BSWaterShaderPropertyRef;

/*!
 * Skyrim water shader property, different from "WaterShaderProperty" seen in
 * Fallout.
 */
class BSWaterShaderProperty : public NiProperty {
public:
	/*! Constructor */
	NIFLIB_API BSWaterShaderProperty();

	/*! Destructor */
	NIFLIB_API virtual ~BSWaterShaderProperty();

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

	// Unknown.
	// \return The current value.
	SkyrimShaderPropertyFlags1 GetShaderFlags1() const;

	// Unknown.
	// \param[in] value The new value.
	void SetShaderFlags1( const SkyrimShaderPropertyFlags1 & value );

	// Unknown.
	// \return The current value.
	SkyrimShaderPropertyFlags2 GetShaderFlags2() const;

	// Unknown.
	// \param[in] value The new value.
	void SetShaderFlags2( const SkyrimShaderPropertyFlags2 & value );

	// Offset UVs. Seems to be unused, but it fits with the other Skyrim shader
	// properties.
	// \return The current value.
	TexCoord GetUvOffset() const;

	// Offset UVs. Seems to be unused, but it fits with the other Skyrim shader
	// properties.
	// \param[in] value The new value.
	void SetUvOffset( const TexCoord & value );

	// Offset UV Scale to repeat tiling textures, see above.
	// \return The current value.
	TexCoord GetUvScale() const;

	// Offset UV Scale to repeat tiling textures, see above.
	// \param[in] value The new value.
	void SetUvScale( const TexCoord & value );

	// Defines attributes for the water shader (will use SkyrimWaterShaderFlags)
	// \return The current value.
	SkyrimWaterShaderFlags GetWaterShaderFlags() const;

	// Defines attributes for the water shader (will use SkyrimWaterShaderFlags)
	// \param[in] value The new value.
	void SetWaterShaderFlags( const SkyrimWaterShaderFlags & value );

	// A bitflag, only the first/second bit controls water flow positive or negative
	// along UVs.
	// \return The current value.
	byte GetWaterDirection() const;

	// A bitflag, only the first/second bit controls water flow positive or negative
	// along UVs.
	// \param[in] value The new value.
	void SetWaterDirection( byte value );

	****End Example Naive Implementation***/

	//--BEGIN MISC CUSTOM CODE--//

	//--END CUSTOM CODE--//
protected:
	/*! Unknown. */
	SkyrimShaderPropertyFlags1 shaderFlags1;
	/*! Unknown. */
	SkyrimShaderPropertyFlags2 shaderFlags2;
	/*!
	 * Offset UVs. Seems to be unused, but it fits with the other Skyrim shader
	 * properties.
	 */
	TexCoord uvOffset;
	/*! Offset UV Scale to repeat tiling textures, see above. */
	TexCoord uvScale;
	/*! Defines attributes for the water shader (will use SkyrimWaterShaderFlags) */
	SkyrimWaterShaderFlags waterShaderFlags;
	/*!
	 * A bitflag, only the first/second bit controls water flow positive or negative
	 * along UVs.
	 */
	byte waterDirection;
	/*! Unknown, flag? */
	unsigned short unknownShort3;
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
