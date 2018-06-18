/*
 * (C) Copyright 2017 UCAR
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 */

#include "oops/interface/LinearObsOperBase.h"

//Atmosphere
#include "atmosphere/radiosonde/ObsRadiosondeTLAD.h"
#include "atmosphere/aircraft/ObsAircraftTLAD.h"
#include "atmosphere/radiance/ObsRadianceTLAD.h"

//Marine
#include "marine/seaicefraction/ObsSeaIceFractionTLAD.h"
#include "marine/seaicethickness/ObsSeaIceThicknessTLAD.h"
#include "marine/stericheight/ObsStericHeightTLAD.h"
#include "marine/insitutemperature/ObsInsituTemperatureTLAD.h"
#include "marine/adt/ObsADTTLAD.h"
#include "marine/seasurfacetemp/ObsSeaSurfaceTempTLAD.h"

//Constituents
#include "constituents/aod/ObsAodTLAD.h"

namespace ufo {

template<typename MODEL> void instantiateLinearObsOpFactory() {
//Atmosphere
  static oops::LinearObsOpMaker<MODEL, ObsRadiosondeTLAD<MODEL>>        makerRadiosondeTL_("Radiosonde");
  static oops::LinearObsOpMaker<MODEL, ObsAircraftTLAD<MODEL>>          makerAircraftTL_("Aircraft");
  static oops::LinearObsOpMaker<MODEL, ObsRadianceTLAD<MODEL>>          makerRadianceTL_("Radiance");
//Marine
  static oops::LinearObsOpMaker<MODEL, ObsStericHeightTLAD<MODEL>>      makerStericHeightTL_("StericHeight");
  static oops::LinearObsOpMaker<MODEL, ObsSeaIceFractionTLAD<MODEL>>    makerFractionTL_("SeaIceFraction");
  static oops::LinearObsOpMaker<MODEL, ObsSeaIceThicknessTLAD<MODEL>>   makerThicknessTL("SeaIceThickness");
  static oops::LinearObsOpMaker<MODEL, ObsInsituTemperatureTLAD<MODEL>> makerInsituTemperatureTL("InsituTemperature");
  static oops::LinearObsOpMaker<MODEL, ObsADTTLAD<MODEL>>               makerADTTL("ADT");
  static oops::LinearObsOpMaker<MODEL, ObsSeaSurfaceTempTLAD<MODEL>>    makerSeaSurfaceTempTL("SeaSurfaceTemp");
//Constituents
  static oops::LinearObsOpMaker<MODEL, ObsAodTLAD<MODEL>>               makerAodTL_("Aod");
}

}
