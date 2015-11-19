/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSData;

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying> {

	NSArray* _containerItems;
	int _originatorType;
	int _originatorVersion;

}

@property (nonatomic,copy,readonly) NSArray * containerItems;                 //@synthesize containerItems=_containerItems - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) int originatorType;                            //@synthesize originatorType=_originatorType - In the implementation block
@property (nonatomic,readonly) int originatorVersion;                         //@synthesize originatorVersion=_originatorVersion - In the implementation block
-(NSData *)dataRepresentation;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)containerItemFollowingContainerItem:(id)arg1 ;
-(NSArray *)containerItems;
-(int)originatorType;
-(int)originatorVersion;
-(id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(id)contextByRemovingContainerItem:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
@end

