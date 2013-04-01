//
//  ofxAssimpMeshHelper.cpp
//  Created by Lukasz Karluk on 4/12/12.
//

#include "ofxAssimpMeshHelper.h"
#include "ofxAssimpUtils.h"
//#include "aiMesh.h"
#include "mesh.h"
#include "Importer.hpp"

ofxAssimpMeshHelper::ofxAssimpMeshHelper() {
    mesh = NULL;
    blendMode = OF_BLENDMODE_ALPHA;
    twoSided = false;
    hasChanged = false;
    validCache = false;
}

ofxAssimpMeshHelper::~ofxAssimpMeshHelper() {
    //
}
