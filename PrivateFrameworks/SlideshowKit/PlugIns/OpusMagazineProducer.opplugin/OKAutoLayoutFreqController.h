/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface OKAutoLayoutFreqController : NSObject {

	NSMutableArray* _pages;
	int _counts[6];
	NSMutableArray* _pageFrequency;
	NSMutableDictionary* _layoutsByResolution;

}
-(id)_freqOrderFromHightToLow;
-(id)bestLayoutByFreqOfSameUpFromLayouts:(id)arg1 forResolution:(id)arg2 ;
-(char)_isLayout:(id)arg1 usedInLast:(int)arg2 ;
-(void)addOnePageLayout:(id)arg1 ;
-(float)_freqOfUp:(id)arg1 ;
-(id)bestLayoutByFreqOfAnyUpsFromLayouts:(id)arg1 ;
-(void)printStatistics;
-(void)dealloc;
-(id)init;
@end
