/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface _DECLaunchInfo : NSObject <NSSecureCoding> {

	unsigned char _consumerSubtype;
	int _launchSource;
	NSString* _query;
	int _itemsShownCount;
	NSDictionary* _itemsShownCounts;

}

@property (nonatomic,readonly) int launchSource;                             //@synthesize launchSource=_launchSource - In the implementation block
@property (nonatomic,readonly) NSString * query;                             //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) int itemsShownCount;                          //@synthesize itemsShownCount=_itemsShownCount - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubtype;                //@synthesize consumerSubtype=_consumerSubtype - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemsShownCounts;              //@synthesize itemsShownCounts=_itemsShownCounts - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)query;
-(NSDictionary *)itemsShownCounts;
-(int)itemsShownCount;
-(id)initWithLaunchSource:(int)arg1 query:(id)arg2 itemsShownCount:(int)arg3 itemsShownCounts:(id)arg4 consumerSubtype:(unsigned char)arg5 ;
-(id)initWithLaunchSource:(int)arg1 query:(id)arg2 itemsShownCount:(int)arg3 itemsShownCounts:(id)arg4 ;
-(int)launchSource;
-(unsigned char)consumerSubtype;
@end

