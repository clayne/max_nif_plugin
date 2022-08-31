/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/ByteColor3.h"
using namespace Niflib;

//Constructor
ByteColor3::ByteColor3() : r((byte)0), g((byte)0), b((byte)0) {};

//Copy Constructor
ByteColor3::ByteColor3( const ByteColor3 & src ) {
	*this = src;
};

//Copy Operator
ByteColor3 & ByteColor3::operator=( const ByteColor3 & src ) {
	this->r = src.r;
	this->g = src.g;
	this->b = src.b;
	return *this;
};

//Destructor
ByteColor3::~ByteColor3() {};

//--BEGIN MISC CUSTOM CODE--//

//ByteColor4
void Niflib::NifStream( ByteColor3 & val, istream& in, const NifInfo & info ) {
	val.r = ReadByte( in );
	val.g = ReadByte( in );
	val.b = ReadByte( in );
};

void Niflib::NifStream( ByteColor3 const & val, ostream& out, const NifInfo & info ) {
	WriteByte( val.r, out );
	WriteByte( val.g, out );
	WriteByte( val.b, out );
};

ostream & Niflib::operator<<( ostream & out, ByteColor3 const & val ) {
	return out << "{R:" << setw(6) << val.r << " G:" << setw(6) << val.g << " B:" << setw(6) << val.b << "}";
}

//--END CUSTOM CODE--//
