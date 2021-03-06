/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBannerTarget.h>

@protocol SBUIBannerTargetImplementation;
@class NSString;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget> {

	void* _identifier;
	int _idiom;
	id<SBUIBannerTargetImplementation> _implementation;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int bannerTargetIdiom;                     //@synthesize idiom=_idiom - In the implementation block
-(NSString *)description;
-(void)invalidate;
-(void*)bannerTargetIdentifier;
-(int)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(char)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(id)initWithTargetImplementation:(id)arg1 ;
@end

