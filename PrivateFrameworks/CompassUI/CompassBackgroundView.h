/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <CompassUI/CompassRotatingView.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class GLKView, EAGLContext, CompassShader, CompassAtlas, NSString;

@interface CompassBackgroundView : CompassRotatingView <GLKViewDelegate> {

	CGPoint _compassCenter;
	float _ticLength;
	char _shownInCompass;
	GLKView* _glView;
	EAGLContext* _context;
	CompassShader* _normalShader;
	CompassShader* _knockoutShader;
	CompassShader* _textureShader;
	CompassShader* _lineShader;
	GLKMatrix4 _modelViewMatrix;
	GLKMatrix4 _projectionMatrix;
	unsigned _ticVertexArray;
	unsigned _ticVertexBuffer;
	unsigned _ticIndexBuffer;
	SCD_Struct_Co17* _ticPoints;
	unsigned* _ticIndexes;
	unsigned _labelsVertexArray;
	unsigned _labelsVertexBuffer;
	unsigned _labelsIndexBuffer;
	SCD_Struct_Co18* _labelsPoints;
	unsigned* _labelsIndexes;
	unsigned _otherLinesVertexArray;
	unsigned _otherLinesVertexBuffer;
	unsigned _otherLinesIndexBuffer;
	CompassAtlas* _imageAtlas;
	CGPoint _currentOffset;
	float _ticRadius;
	float _bearing;

}

@property (assign,nonatomic) float ticRadius;                       //@synthesize ticRadius=_ticRadius - In the implementation block
@property (nonatomic,readonly) float ticLength;                     //@synthesize ticLength=_ticLength - In the implementation block
@property (assign,nonatomic) float bearing;                         //@synthesize bearing=_bearing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)setTicRadius:(float)arg1 ;
-(float)ticLength;
-(id)initWithFrame:(CGRect)arg1 forCompass:(char)arg2 ;
-(void)setupGL;
-(void)generateCompassPoints;
-(void)generateNumberAtlas;
-(void)tearDownGL;
-(void)renderCrosshairInRect:(CGRect)arg1 ;
-(void)positionLabelNamed:(id)arg1 atDegrees:(int)arg2 fromCenter:(CGPoint)arg3 withRadius:(float)arg4 vertexOffset:(unsigned)arg5 color:(SCD_Struct_Co16)arg6 ;
-(void)generateExtraLines;
-(void)positionLabels;
-(void)setCompassHeading:(double)arg1 ;
-(void)setBearing:(float)arg1 ;
-(char)setCrosshairOffset:(CGSize)arg1 ;
-(float)ticRadius;
-(float)bearing;
-(void)updateDisplay;
@end

