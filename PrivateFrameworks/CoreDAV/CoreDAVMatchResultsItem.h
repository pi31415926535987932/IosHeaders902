/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(void)setRegion:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)region;
-(CoreDAVLeafItem *)language;
-(void)setLanguage:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)calendarDescription;
-(void)setCalendarDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)rank;
-(void)setRank:(CoreDAVLeafItem *)arg1 ;
@end

