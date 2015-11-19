/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableSet, NSSet;

@interface SUScanOptions : NSObject <NSSecureCoding> {

	NSString* _identifier;
	char _forced;
	NSMutableSet* _types;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isForced,nonatomic) char forced;              //@synthesize forced=_forced - In the implementation block
@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
+(char)supportsSecureCoding;
-(void)addType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSSet *)types;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)clearTypes;
-(void)setTypes:(NSSet *)arg1 ;
-(char)containsType:(int)arg1 ;
-(void)removeType:(int)arg1 ;
-(char)findsAnyUpdate;
-(char)isForced;
-(void)setForced:(char)arg1 ;
@end

