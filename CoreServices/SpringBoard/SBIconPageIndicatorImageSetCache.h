/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UILegibilitySettings, SBIconPageIndicatorImageSetResult;

@interface SBIconPageIndicatorImageSetCache : NSObject {

	_UILegibilitySettings* _legibilitySettings;
	SBIconPageIndicatorImageSetResult* _indicatorImageSetResults;
	SBIconPageIndicatorImageSetResult* _searchImageSetResults;

}
+(id)homescreenPageIndicatorImageSetCache;
-(id)pageIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)searchIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)_emptyPageIndicatorSet;
-(void)dealloc;
-(void)setLegibilitySettings:(id)arg1 ;
@end

