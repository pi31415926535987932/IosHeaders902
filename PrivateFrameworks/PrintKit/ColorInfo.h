/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/printd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ColorInfo : NSObject {

	NSString* colorReason;
	NSMutableArray* gstateStack;
	NSString* strokeColorspace;
	NSString* nonStrokeColorspace;

}

@property (retain) NSString * colorReason; 
@property (retain) NSMutableArray * gstateStack; 
@property (retain) NSString * strokeColorspace; 
@property (retain) NSString * nonStrokeColorspace; 
-(NSString *)strokeColorspace;
-(void)setStrokeColorspace:(NSString *)arg1 ;
-(NSString *)nonStrokeColorspace;
-(void)setNonStrokeColorspace:(NSString *)arg1 ;
-(NSMutableArray *)gstateStack;
-(NSString *)colorReason;
-(void)setColorReason:(NSString *)arg1 ;
-(void)gsave;
-(void)grestore;
-(void)setGstateStack:(NSMutableArray *)arg1 ;
-(id)init;
@end

