/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusMagazineProducer/OpusMagazineProducer-Structs.h>
@class NSMutableArray, NSDictionary, NSString;

@interface OKAutoLayoutLayoutInfo : NSObject {

	char _isTitle;
	char _isSubtitle;
	float _currentScore;
	float _baseScore;
	unsigned _numOfMedia;
	NSMutableArray* _areaPercentInAppearOrder;
	NSMutableArray* _aspectRatiosInAppearOrder;
	NSMutableArray* _rectNamesInAppearOrder;
	NSDictionary* _origLayout;
	NSString* _textWidgetName;

}

@property (assign,nonatomic) float currentScore;                                        //@synthesize currentScore=_currentScore - In the implementation block
@property (nonatomic,readonly) float baseScore;                                         //@synthesize baseScore=_baseScore - In the implementation block
@property (nonatomic,readonly) unsigned numOfMedia;                                     //@synthesize numOfMedia=_numOfMedia - In the implementation block
@property (nonatomic,readonly) NSMutableArray * areaPercentInAppearOrder;               //@synthesize areaPercentInAppearOrder=_areaPercentInAppearOrder - In the implementation block
@property (nonatomic,readonly) NSMutableArray * aspectRatiosInAppearOrder;              //@synthesize aspectRatiosInAppearOrder=_aspectRatiosInAppearOrder - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rectNamesInAppearOrder;                 //@synthesize rectNamesInAppearOrder=_rectNamesInAppearOrder - In the implementation block
@property (nonatomic,readonly) NSDictionary * origLayout;                               //@synthesize origLayout=_origLayout - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) char isTitle;                                            //@synthesize isTitle=_isTitle - In the implementation block
@property (nonatomic,readonly) char isSubtitle;                                         //@synthesize isSubtitle=_isSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * textWidgetName;                               //@synthesize textWidgetName=_textWidgetName - In the implementation block
-(NSDictionary *)origLayout;
-(CGSize)targetScreenSize;
-(void)setCurrentScore:(float)arg1 ;
-(unsigned)numOfMedia;
-(CGRect)rectForRectName:(id)arg1 ;
-(NSMutableArray *)areaPercentInAppearOrder;
-(NSMutableArray *)aspectRatiosInAppearOrder;
-(char)isSubtitle;
-(float)baseScore;
-(NSString *)textWidgetName;
-(float)currentScore;
-(char)isTitle;
-(void)_parseLayout;
-(NSMutableArray *)rectNamesInAppearOrder;
-(id)initWithLayout:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
@end

