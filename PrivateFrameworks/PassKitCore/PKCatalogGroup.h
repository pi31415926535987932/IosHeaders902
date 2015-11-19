/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSMutableArray;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {

	char _isUbiquitous;
	NSNumber* _groupID;
	NSMutableArray* _uniqueIDs;

}

@property (nonatomic,retain) NSNumber * groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;              //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (assign,nonatomic) char isUbiquitous;                       //@synthesize isUbiquitous=_isUbiquitous - In the implementation block
+(char)supportsSecureCoding;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isUbiquitous;
-(char)isEqualToGroup:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(void)setIsUbiquitous:(char)arg1 ;
@end
