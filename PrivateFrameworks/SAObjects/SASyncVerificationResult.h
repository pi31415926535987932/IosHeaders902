/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASyncVerificationResult : AceObject <SAAceSerializable>

@property (assign,nonatomic) int fail; 
@property (nonatomic,copy) NSArray * failedObjectIds; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int total; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)verificationResult;
+(id)verificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)total;
-(void)setTotal:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(id)encodedClassName;
-(int)fail;
-(void)setFail:(int)arg1 ;
-(NSArray *)failedObjectIds;
-(void)setFailedObjectIds:(NSArray *)arg1 ;
@end

