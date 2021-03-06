
/*
    pbrt source code Copyright(c) 1998-2010 Matt Pharr and Greg Humphreys.

    This file is part of pbrt.

    pbrt is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.  Note that the text contents of
    the book "Physically Based Rendering" are *not* licensed under the
    GNU GPL.

    pbrt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

 */


// textures/marble.cpp*
#include "stdafx.h"
#include "textures/marble.h"

// MarbleTexture Method Definitions
Texture<float> *CreateMarbleFloatTexture(const Transform &tex2world,
        const TextureParams &tp) {
    return NULL;
}



MarbleTexture *CreateMarbleSpectrumTexture(const Transform &tex2world,
        const TextureParams &tp) {
    // Initialize 3D texture mapping _map_ from _tp_
    TextureMapping3D *map = new IdentityMapping3D(tex2world);
    return new MarbleTexture(tp.FindInt("octaves", 8),
        tp.FindFloat("roughness", .5f),
        tp.FindFloat("scale", 1.f),
        tp.FindFloat("variation", .2f),
        map);
}


