/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSAutomaticReadingListRecordRange, NSArray;

@interface WBSAutomaticReadingListTrackedRecordsInfo : NSObject {

	WBSAutomaticReadingListRecordRange* _rangeOfTrackedRecords;
	NSArray* _items;

}

@property (nonatomic,copy) WBSAutomaticReadingListRecordRange * rangeOfTrackedRecords;              //@synthesize rangeOfTrackedRecords=_rangeOfTrackedRecords - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                         //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setRangeOfTrackedRecords:(WBSAutomaticReadingListRecordRange *)arg1 ;
-(WBSAutomaticReadingListRecordRange *)rangeOfTrackedRecords;
@end

