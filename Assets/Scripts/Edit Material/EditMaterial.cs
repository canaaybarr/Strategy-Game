using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct EditMaterial 
{
    private Material[] mat;

    public void Edit(MeshRenderer mesh, Material material, int index)
    {
        mat = mesh.materials;
        mat[index] = material;
        mesh.materials = mat;
    }
    public void Edit(SkinnedMeshRenderer mesh, Material material, int index)
    {
        mat = mesh.materials;
        mat[index] = material;
        mesh.materials = mat;
    }

}
