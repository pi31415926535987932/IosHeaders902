/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject {

	NSString* _searchString;
	NSDate* _date;

}

@property (readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSDate *)date;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 date:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
@end

