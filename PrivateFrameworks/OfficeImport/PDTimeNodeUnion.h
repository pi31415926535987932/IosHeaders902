/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDCmdBehavior;

@interface PDTimeNodeUnion : NSObject {

	PDAnimateTimeBehavior* mTimeBehavior;
	PDAnimateEffectBehavior* mEffectBehavior;
	PDAnimateMotionBehavior* mMotionBehavior;
	PDAnimateRotateBehavior* mRotateBehavior;
	PDAnimateScaleBehavior* mScaleBehavior;
	PDAnimateColorBehavior* mColorBehavior;
	PDAudioNode* mAudio;
	PDVideoNode* mVideo;
	PDParallelTimeNode* mParallelTimeNodeGroup;
	PDSequentialTimeNode* mSequentialTimeNodeGroup;
	PDSetBehavior* mSetBehavior;
	PDCmdBehavior* mCmdBehavior;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)behavior;
-(void)setBehavior:(id)arg1 ;
-(id)commonBehavior;
-(id)timeBehavior;
-(void)setTimeBehavior:(id)arg1 ;
-(id)effectBehavior;
-(void)setEffectBehavior:(id)arg1 ;
-(id)motionBehavior;
-(void)setMotionBehavior:(id)arg1 ;
-(id)rotateBehavior;
-(void)setRotateBehavior:(id)arg1 ;
-(id)scaleBehavior;
-(void)setScaleBehavior:(id)arg1 ;
-(id)colorBehavior;
-(void)setColorBehavior:(id)arg1 ;
-(id)audio;
-(void)setAudio:(id)arg1 ;
-(id)video;
-(void)setVideo:(id)arg1 ;
-(id)parallel;
-(void)setParallel:(id)arg1 ;
-(id)sequential;
-(void)setSequential:(id)arg1 ;
-(id)cmdBehavior;
-(void)setCmdBehavior:(id)arg1 ;
@end

