/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController;

@interface AKAlignmentGuideController : NSObject {

	CGPoint _initialDraggedAnnotationsCombinedCenter;
	CGPoint* _otherAnnotationCenters;
	unsigned _otherAnnotationCentersCount;
	char _exifHasFlippedAxes;
	AKPageController* _pageController;
	float _screenToModelScaleFactor;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) char exifHasFlippedAxes;                        //@synthesize exifHasFlippedAxes=_exifHasFlippedAxes - In the implementation block
@property (assign) float screenToModelScaleFactor;                 //@synthesize screenToModelScaleFactor=_screenToModelScaleFactor - In the implementation block
-(void)dealloc;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)setExifHasFlippedAxes:(char)arg1 ;
-(void)setScreenToModelScaleFactor:(float)arg1 ;
-(float)screenToModelScaleFactor;
-(id)initWithPageController:(id)arg1 ;
-(CGPoint)guideAlignedPointForPoint:(CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3 ;
-(char)exifHasFlippedAxes;
@end

