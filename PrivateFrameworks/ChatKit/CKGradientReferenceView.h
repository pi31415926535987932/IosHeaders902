/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CKGradientReferenceView.h>

@protocol CKGradientReferenceView <NSObject>
@required
-(CGRect*)gradientFrame;

@end


@class NSString;

@interface CKGradientReferenceView : UIView <CKGradientReferenceView> {

	CGRect _gradientFrame;

}

@property (assign,nonatomic) CGRect gradientFrame;                  //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)gradientFrame;
-(void)setGradientFrame:(CGRect)arg1 ;
@end
