/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CAAnimation, SCNNode, NSString;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {

	CAAnimation* _animation;
	int _inputMode;
	float _inputScale;
	float _inputBias;
	SCNNode* _inputOrigin;
	NSString* _inputProperty;
	id _c3dAnimation;

}

@property (nonatomic,retain) CAAnimation * animation; 
@property (assign,nonatomic) int inputMode; 
@property (assign,nonatomic) float inputScale; 
@property (assign,nonatomic) float inputBias; 
@property (assign,nonatomic,__weak) SCNNode * inputOrigin; 
@property (nonatomic,copy) NSString * inputProperty; 
+(id)particlePropertyControllerWithAnimation:(id)arg1 ;
+(id)controllerWithAnimation:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setC3dAnimation:(id)arg1 ;
-(float)inputScale;
-(float)inputBias;
-(SCNNode *)inputOrigin;
-(NSString *)inputProperty;
-(id)c3dAnimation;
-(void)setInputScale:(float)arg1 ;
-(void)setInputBias:(float)arg1 ;
-(void)setInputOrigin:(SCNNode *)arg1 ;
-(void)setInputProperty:(NSString *)arg1 ;
-(void)_customEncodingOfSCNParticlePropertyController:(id)arg1 ;
-(void)_customDecodingOfSCNParticlePropertyController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAAnimation *)animation;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(void)setAnimation:(CAAnimation *)arg1 ;
@end

