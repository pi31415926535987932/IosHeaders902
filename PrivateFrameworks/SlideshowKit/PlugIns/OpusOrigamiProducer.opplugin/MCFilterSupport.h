/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol MCFilterSupport
@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned countOfFilters; 
@required
-(void)demolishFilters;
-(unsigned)countOfFilters;
-(void)observeFilter:(id)arg1;
-(void)initFiltersWithImprints:(id)arg1;
-(id)imprintsForFilters;
-(void)unobserveFilter:(id)arg1;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned)arg2;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)arg1;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned)arg2;
-(id)addFilterWithFilterID:(id)arg1;
-(NSArray *)orderedFilters;
-(NSSet *)filters;
-(id)filterAtIndex:(unsigned)arg1;

@end
