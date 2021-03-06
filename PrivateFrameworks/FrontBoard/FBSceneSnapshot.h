/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class FBScene, FBSceneSnapshotContext, XBDisplaySnapshot, UIImage;

@interface FBSceneSnapshot : NSObject {

	FBScene* _scene;
	FBSceneSnapshotContext* _context;
	XBDisplaySnapshot* _snapshot;

}

@property (nonatomic,retain,readonly) FBSceneSnapshotContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (getter=isDataLoaded,nonatomic,readonly) char dataLoaded; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,retain,readonly) UIImage * UIImage; 
-(void)dealloc;
-(CGImageRef)CGImage;
-(UIImage *)UIImage;
-(FBSceneSnapshotContext *)context;
-(IOSurfaceRef)IOSurface;
-(id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3 ;
-(CGAffineTransform)_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2 ;
-(char)isDataLoaded;
-(void)capture;
-(id)initWithScene:(id)arg1 snapshotContext:(id)arg2 ;
@end

