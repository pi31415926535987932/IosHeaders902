/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/__PGView.h>

@class NSString;

@interface PGBackdropView : __PGView

@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) double saturationAmount; 
@property (assign,nonatomic) double gaussianBlurRadius; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setGaussianBlurRadius:(double)arg1 ;
-(void)setSaturationAmount:(double)arg1 ;
-(double)saturationAmount;
-(double)gaussianBlurRadius;
@end

