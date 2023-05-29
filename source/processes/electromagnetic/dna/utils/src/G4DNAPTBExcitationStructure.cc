//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************

#include "G4DNAPTBExcitationStructure.hh"
#include "G4SystemOfUnits.hh"

G4DNAPTBExcitationStructure::G4DNAPTBExcitationStructure()
{

//    provided by Carmen; for N2 - INCOMPLETE! for C3H8 - not verified yet!
//
//    energyConstant["N2"].push_back(1.85*eV);
//    energyConstant["N2"].push_back(2.15*eV);
//    energyConstant["N2"].push_back(8.00*eV);
//    energyConstant["N2"].push_back(8.50*eV);
//    energyConstant["N2"].push_back(8.60*eV);
//    energyConstant["N2"].push_back(11.05*eV);
//    energyConstant["N2"].push_back(11.90*eV);
//    energyConstant["N2"].push_back(12.25*eV);
//    energyConstant["N2"].push_back(12.50*eV);
//    energyConstant["N2"].push_back(13.30*eV);

//    energyConstant["C3H8"].push_back(0.08*eV);
//    energyConstant["C3H8"].push_back(1.01*eV);
//    energyConstant["C3H8"].push_back(0.17*eV);
//    energyConstant["C3H8"].push_back(1.54*eV);
//    energyConstant["C3H8"].push_back(0.14*eV);
//    energyConstant["C3H8"].push_back(1.27*eV);
//    energyConstant["C3H8"].push_back(2.3*eV);
//    energyConstant["C3H8"].push_back(5.21*eV);
//    energyConstant["C3H8"].push_back(9.00*eV);
//    energyConstant["C3H8"].push_back(34.35*eV);
//    energyConstant["C3H8"].push_back(8.94*eV);


//  taken directly from PTra code by MPietrzak
    energyConstant["N2"].push_back( 1.85*eV);
    energyConstant["N2"].push_back( 2.15*eV);
    energyConstant["N2"].push_back( 8.00*eV);
    energyConstant["N2"].push_back( 8.50*eV);
    energyConstant["N2"].push_back( 8.60*eV);
    energyConstant["N2"].push_back(11.05*eV);
    energyConstant["N2"].push_back(11.79*eV);
    energyConstant["N2"].push_back(11.90*eV);
    energyConstant["N2"].push_back(12.25*eV);
    energyConstant["N2"].push_back(12.50*eV);
    energyConstant["N2"].push_back(13.01*eV);
    energyConstant["N2"].push_back(13.19*eV);
    energyConstant["N2"].push_back(13.30*eV);
    energyConstant["N2"].push_back(14.33*eV);
    energyConstant["N2"].push_back(14.84*eV);
    energyConstant["N2"].push_back(15.18*eV);
    energyConstant["N2"].push_back(15.70*eV);
    energyConstant["N2"].push_back(15.75*eV);
    energyConstant["N2"].push_back(15.86*eV);
    energyConstant["N2"].push_back(17.36*eV);
    energyConstant["N2"].push_back(17.95*eV);
    energyConstant["N2"].push_back(19.77*eV);
    energyConstant["N2"].push_back(20.79*eV);
    energyConstant["N2"].push_back(20.87*eV);
    energyConstant["N2"].push_back(22.27*eV);
    energyConstant["N2"].push_back(22.83*eV);
    energyConstant["N2"].push_back(37.19*eV);
    energyConstant["N2"].push_back(38.67*eV);
    energyConstant["N2"].push_back(39.23*eV);
    
    //  taken directly from PTra code for C3H8 by MPietrzak
    // todo - verify that it does not need to be in ascending order
    // now the order is as in PTra
    energyConstant["C3H8"].push_back(8.26700e-2 * eV);
    energyConstant["C3H8"].push_back(1.01415e-0 * eV);
    energyConstant["C3H8"].push_back(1.74740e-1 * eV);
    energyConstant["C3H8"].push_back(1.53947e+0 * eV);
    energyConstant["C3H8"].push_back(1.38860e-1 * eV);
    energyConstant["C3H8"].push_back(1.27445e+0 * eV);
    energyConstant["C3H8"].push_back(2.30015e+0 * eV);
    energyConstant["C3H8"].push_back(5.21354e+0 * eV);
    energyConstant["C3H8"].push_back(9.00000e+0 * eV);
    energyConstant["C3H8"].push_back(3.43533e+1 * eV);
    energyConstant["C3H8"].push_back(8.93765e+0 * eV);
    
    std::map<G4String, std::vector<G4double> >::iterator it;
    for(it=energyConstant.begin();it!=energyConstant.end();it++)
    {
        nExcLevels[it->first] = (it->second).size();
    }
}


G4DNAPTBExcitationStructure::~G4DNAPTBExcitationStructure()
{ }


G4double G4DNAPTBExcitationStructure::ExcitationEnergy(G4int ExcLevel, const G4String& materialName)
{
    G4String matNameModif = ReplaceMaterial(materialName);

    // check if the material exist in the map
    if(energyConstant.find(matNameModif)==energyConstant.end())
    {
        std::ostringstream oss;
        oss << "Material name was not found in energyConstantMap. Problematic material is: "<<matNameModif;
        G4Exception("G4DNAPTBExcitationStructure::ExcitationEnergy","em0002",
                    FatalException, oss.str().c_str());
    }

    G4double excitation = 0.;

    if (ExcLevel >=0 && ExcLevel < nExcLevels[matNameModif]) excitation = energyConstant[matNameModif][ExcLevel];

    return excitation;
}

G4int G4DNAPTBExcitationStructure::NumberOfExcLevels(const G4String& materialName)
{
    G4String matNameModif = ReplaceMaterial(materialName);

    // check if the material exist in the map
    if(nExcLevels.find(matNameModif)==nExcLevels.end())
    {
        std::ostringstream oss;
        oss << "Material name was not found in energyConstantMap. Problematic material is: "<<matNameModif;
        G4Exception("G4DNAPTBNDExcitationStructure::NumberOfExcLevels","em0002",
                    FatalException, oss.str().c_str());
    }

    return nExcLevels[matNameModif];
}

G4String G4DNAPTBExcitationStructure::ReplaceMaterial(const G4String& materialName)
{
    G4String materialNameModified (materialName);

    if(materialName=="G4_N2") materialNameModified  = "N2";
    else if(materialName=="G4_PROPANE") materialNameModified  = "C3H8";
    
    return materialNameModified;
}
