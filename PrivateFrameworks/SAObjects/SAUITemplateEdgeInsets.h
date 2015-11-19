/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>

@property (assign,nonatomic) float bottom; 
@property (assign,nonatomic) float left; 
@property (assign,nonatomic) float right; 
@property (assign,nonatomic) float top; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)edgeInsets;
+(id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLeft:(float)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(float)left;
-(float)top;
-(float)right;
-(float)bottom;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setBottom:(float)arg1 ;
@end

