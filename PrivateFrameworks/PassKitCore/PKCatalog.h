/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSSecureCoding> {

	NSMutableArray* _groups;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSMutableArray * groups;              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(char)supportsSecureCoding;
+(id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSMutableArray *)groups;
-(void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(char)arg3 ;
-(char)isEquivalentToCatalog:(id)arg1 ;
-(char)isNewerThanCatalog:(id)arg1 ;
-(id)allGroupIDs;
-(void)shuffle:(int)arg1 ;
@end

