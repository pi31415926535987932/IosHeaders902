/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BLHistogramAnalysis : NSObject {

	float _blackPoint;
	float _whitePoint;
	float _blackPointRed;
	float _whitePointRed;
	float _blackPointGreen;
	float _whitePointGreen;
	float _blackPointBlue;
	float _whitePointBlue;
	float _averageLinearRed;
	float _averageLinearBlue;
	float _averageLinearGreen;

}

@property (assign,nonatomic) float blackPoint;                      //@synthesize blackPoint=_blackPoint - In the implementation block
@property (assign,nonatomic) float whitePoint;                      //@synthesize whitePoint=_whitePoint - In the implementation block
@property (assign,nonatomic) float blackPointRed;                   //@synthesize blackPointRed=_blackPointRed - In the implementation block
@property (assign,nonatomic) float whitePointRed;                   //@synthesize whitePointRed=_whitePointRed - In the implementation block
@property (assign,nonatomic) float blackPointGreen;                 //@synthesize blackPointGreen=_blackPointGreen - In the implementation block
@property (assign,nonatomic) float whitePointGreen;                 //@synthesize whitePointGreen=_whitePointGreen - In the implementation block
@property (assign,nonatomic) float blackPointBlue;                  //@synthesize blackPointBlue=_blackPointBlue - In the implementation block
@property (assign,nonatomic) float whitePointBlue;                  //@synthesize whitePointBlue=_whitePointBlue - In the implementation block
@property (assign,nonatomic) float averageLinearRed;                //@synthesize averageLinearRed=_averageLinearRed - In the implementation block
@property (assign,nonatomic) float averageLinearBlue;               //@synthesize averageLinearBlue=_averageLinearBlue - In the implementation block
@property (assign,nonatomic) float averageLinearGreen;              //@synthesize averageLinearGreen=_averageLinearGreen - In the implementation block
-(float)whitePoint;
-(void)dealloc;
-(id)description;
-(id)initWithBLImage:(id)arg1 ;
-(id)analysisDictionary;
-(id)initWithAnalysisDictionary:(id)arg1 ;
-(float)blackPoint;
-(void)setBlackPoint:(float)arg1 ;
-(void)setWhitePoint:(float)arg1 ;
-(float)blackPointRed;
-(void)setBlackPointRed:(float)arg1 ;
-(float)whitePointRed;
-(void)setWhitePointRed:(float)arg1 ;
-(float)blackPointGreen;
-(void)setBlackPointGreen:(float)arg1 ;
-(float)whitePointGreen;
-(void)setWhitePointGreen:(float)arg1 ;
-(float)blackPointBlue;
-(void)setBlackPointBlue:(float)arg1 ;
-(float)whitePointBlue;
-(void)setWhitePointBlue:(float)arg1 ;
-(float)averageLinearRed;
-(void)setAverageLinearRed:(float)arg1 ;
-(float)averageLinearBlue;
-(void)setAverageLinearBlue:(float)arg1 ;
-(float)averageLinearGreen;
-(void)setAverageLinearGreen:(float)arg1 ;
@end
