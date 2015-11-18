/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSMutableArray, NSMutableSet;

@interface _MKSortedDepartureCollection : NSObject {

	NSMapTable* _sequenceForDeparture;
	NSMapTable* _indexForDeparture;
	NSMutableArray* _sortedDepartures;
	NSMutableSet* _groupedSequences;

}

@property (nonatomic,retain) NSMutableArray * sortedDepartures;              //@synthesize sortedDepartures=_sortedDepartures - In the implementation block
@property (nonatomic,retain) NSMutableSet * groupedSequences;                //@synthesize groupedSequences=_groupedSequences - In the implementation block
-(void)setSequence:(id)arg1 forDeparture:(id)arg2 ;
-(void)setIndexInSequence:(unsigned)arg1 forDeparture:(id)arg2 ;
-(id)sequenceForDeparture:(id)arg1 ;
-(NSMutableArray *)sortedDepartures;
-(unsigned)indexInSequenceForDeparture:(id)arg1 ;
-(NSMutableSet *)groupedSequences;
-(void)setGroupedSequences:(NSMutableSet *)arg1 ;
-(void)setSortedDepartures:(NSMutableArray *)arg1 ;
-(id)init;
@end

