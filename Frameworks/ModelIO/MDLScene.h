/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:35:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@class NSMutableArray, NSArray;

@interface MDLScene : NSObject {

	mutex* _sceneMutex;
	vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> >* _sceneObjects;
	vector<MDLLight *, std::__1::allocator<MDLLight *> >* _sceneLights;
	NSMutableArray* _objects;
	int _signature;

}

@property (nonatomic,retain,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(id)raytraceSceneWithCamera:(const RTCamera*)arg1 reflection:(id)arg2 irradiance:(id)arg3 ;
-(int)acquireLockGuard;
-(void)releaseLockGuard:(int)arg1 ;
-(4)hitTestRayFrom:(id)arg1 ;
-(char)castRayFrom:(RTCamera*)arg1 withDirection:(RTIntersectionResult*)arg2 ;
-(NSArray *)objects;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)clear;
@end

