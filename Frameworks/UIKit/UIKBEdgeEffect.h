/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString, UIKBGradient;

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	unsigned _edges;
	float _weight;
	UIKBGradient* _gradient;
	float _opacity;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) unsigned edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                   //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIKBGradient * gradient;               //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) float opacity;                         //@synthesize opacity=_opacity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) char renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) float weight;                          //@synthesize weight=_weight - In the implementation block
+(id)effectWithColor:(id)arg1 edges:(unsigned)arg2 inset:(float)arg3 weight:(float)arg4 ;
+(id)effectWithColor:(id)arg1 edges:(unsigned)arg2 insets:(UIEdgeInsets)arg3 weight:(float)arg4 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)setEdges:(unsigned)arg1 ;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setGradient:(UIKBGradient *)arg1 ;
-(unsigned)edges;
-(UIKBGradient *)gradient;
-(float)weight;
-(id)initWithColor:(id)arg1 edges:(unsigned)arg2 insets:(UIEdgeInsets)arg3 weight:(float)arg4 ;
-(UIEdgeInsets)insets;
-(char)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(float)arg1 ;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end
