#pragma once

#include <SceneGraph/config.h>

#include <SceneGraph/GLSceneGraph.h>
#include <SceneGraph/GLObject.h>

#include <SceneGraph/GLGrid.h>
#include <SceneGraph/GLAxis.h>
#include <SceneGraph/GLWaypoint.h>
#include <SceneGraph/GLLineStrip.h>
#include <SceneGraph/GLText.h>

#ifdef HAVE_ASSIMP
#include <SceneGraph/GLMesh.h>
#endif // HAVE_ASSIMP

#ifdef HAVE_PANGOLIN
#include <SceneGraph/Pangolin.h>
#endif // HAVE_PANGOLIN