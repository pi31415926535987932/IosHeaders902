/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString, NSArray;

@interface SAAnswerSearch : SADomainCommand

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * miscQuestion; 
@property (nonatomic,copy) NSString * placeAttribute; 
@property (nonatomic,copy) NSArray * product; 
@property (nonatomic,copy) NSString * timeQuestion; 
@property (nonatomic,copy) NSString * verbType; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)attribute;
-(void)setAttribute:(NSString *)arg1 ;
-(void)setProduct:(NSArray *)arg1 ;
-(NSArray *)product;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)miscQuestion;
-(void)setMiscQuestion:(NSString *)arg1 ;
-(NSString *)placeAttribute;
-(void)setPlaceAttribute:(NSString *)arg1 ;
-(NSString *)timeQuestion;
-(void)setTimeQuestion:(NSString *)arg1 ;
-(NSString *)verbType;
-(void)setVerbType:(NSString *)arg1 ;
@end

