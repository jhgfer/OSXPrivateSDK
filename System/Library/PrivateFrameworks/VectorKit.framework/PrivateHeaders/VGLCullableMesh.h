//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLMesh.h>

__attribute__((visibility("hidden")))
@interface VGLCullableMesh : VGLMesh
{
    int _vertexOffset;
    unsigned int _pointSize;
    struct shared_ptr<VGLMeshNode> _rootNode[2];
    struct vector<VGLMeshLeafNode, vk_allocator<VGLMeshLeafNode>> _leafNodes[2];
    struct bitset<32> _leafsToDrawBitset[2];
    struct _NSRange _rootRange[2];
}

@property(nonatomic) unsigned int tilePointSize; // @synthesize tilePointSize=_pointSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInRects:(const CDStruct_818bb265 *)arg1 numRects:(unsigned long long)arg2 context:(id)arg3;
- (void)drawInPreparedCulls:(id)arg1;
- (void)prepareCullsInRects:(const CDStruct_818bb265 *)arg1 numRects:(unsigned long long)arg2;
- (void)drawDebugBounds:(id)arg1;
- (void)buildCullingTree;
- (void)freeze;
- (void)_createSortedLineIndicesFromSortedTriangleLinesForIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (void)_splitForIndexMode:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) BOOL isPrimaryIndexModeLinesWithTriangles;

@end

