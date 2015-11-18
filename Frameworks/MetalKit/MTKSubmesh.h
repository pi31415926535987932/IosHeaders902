/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MTKMeshBuffer, MTKMesh, NSString;

@interface MTKSubmesh : NSObject {

	unsigned _primitiveType;
	unsigned _indexType;
	MTKMeshBuffer* _indexBuffer;
	unsigned _indexCount;
	MTKMesh* _mesh;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned primitiveType;                   //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) unsigned indexType;                       //@synthesize indexType=_indexType - In the implementation block
@property (nonatomic,readonly) MTKMeshBuffer * indexBuffer;              //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned indexCount;                      //@synthesize indexCount=_indexCount - In the implementation block
@property (nonatomic,__weak,readonly) MTKMesh * mesh;                    //@synthesize mesh=_mesh - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
-(MTKMesh *)mesh;
-(unsigned)primitiveType;
-(id)initWithMesh:(id)arg1 submesh:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(unsigned)indexCount;
-(MTKMeshBuffer *)indexBuffer;
-(unsigned)indexType;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

