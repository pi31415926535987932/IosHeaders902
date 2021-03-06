/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class CIFilter, SKShader;

@interface SKEffectNode : SKNode {

	SKCEffectNode* _skcEffectNode;

}

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) char shouldCenterFilter; 
@property (assign,nonatomic) char shouldEnableEffects; 
@property (assign,nonatomic) char shouldRasterize; 
@property (assign,nonatomic) int blendMode; 
@property (nonatomic,retain) SKShader * shader; 
-(CIFilter *)filter;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(char)isEqualToNode:(id)arg1 ;
-(void)setShouldEnableEffects:(char)arg1 ;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(char)arg1 to:(char)arg2 ;
-(char)shouldEnableEffects;
-(char)shouldCenterFilter;
-(void)setShouldCenterFilter:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setFilter:(CIFilter *)arg1 ;
-(void)setShouldRasterize:(char)arg1 ;
-(char)shouldRasterize;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
@end

