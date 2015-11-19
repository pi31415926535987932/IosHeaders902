/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSDictionary, NSArray;

@interface SPFeedbackRender : SPFeedback {

	char _leftOfHome;
	NSDictionary* _renderedZKW;
	NSArray* _renderedZKWMaps;
	NSArray* _hiddentExtResults;
	NSArray* _sections;
	double _triggerTimestamp;

}

@property (assign,nonatomic) double triggerTimestamp;                  //@synthesize triggerTimestamp=_triggerTimestamp - In the implementation block
@property (nonatomic,retain) NSDictionary * renderedZKW;               //@synthesize renderedZKW=_renderedZKW - In the implementation block
@property (nonatomic,retain) NSArray * renderedZKWMaps;                //@synthesize renderedZKWMaps=_renderedZKWMaps - In the implementation block
@property (nonatomic,retain) NSArray * hiddentExtResults;              //@synthesize hiddentExtResults=_hiddentExtResults - In the implementation block
@property (assign,nonatomic) char leftOfHome;                          //@synthesize leftOfHome=_leftOfHome - In the implementation block
@property (nonatomic,retain) NSArray * sections;                       //@synthesize sections=_sections - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(double)triggerTimestamp;
-(NSDictionary *)renderedZKW;
-(NSArray *)renderedZKWMaps;
-(char)leftOfHome;
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(void)setTriggerTimestamp:(double)arg1 ;
-(NSArray *)hiddentExtResults;
-(void)setHiddentExtResults:(NSArray *)arg1 ;
-(void)setRenderedZKW:(NSDictionary *)arg1 ;
-(void)setRenderedZKWMaps:(NSArray *)arg1 ;
-(void)setLeftOfHome:(char)arg1 ;
@end
