/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONDrain : NSObject {

	NSArray* _bonArray;
	ABLEStaticMapInclusiveDomainVectorRange* _bonDoubleMap;
	float _domainMin;
	float _domainMax;
	float _rangeMin;
	float _rangeMax;

}

@property (readonly) NSArray * bonArray;                                                //@synthesize bonArray=_bonArray - In the implementation block
@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonDoubleMap;              //@synthesize bonDoubleMap=_bonDoubleMap - In the implementation block
@property (assign) float domainMin;                                                     //@synthesize domainMin=_domainMin - In the implementation block
@property (assign) float domainMax;                                                     //@synthesize domainMax=_domainMax - In the implementation block
@property (assign) float rangeMin;                                                      //@synthesize rangeMin=_rangeMin - In the implementation block
@property (assign) float rangeMax;                                                      //@synthesize rangeMax=_rangeMax - In the implementation block
+(id)bonDrainWithArray:(id)arg1 domainMin:(float)arg2 domainMax:(float)arg3 rangeMin:(float)arg4 rangeMax:(float)arg5 ;
+(id)bonDrainWithDomainMin:(float)arg1 domainMax:(float)arg2 rangeMin:(float)arg3 rangeMax:(float)arg4 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonDoubleMap;
-(NSArray *)bonArray;
-(void)setBonDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
-(float)domainMin;
-(float)domainMax;
-(float)lookupForDrainRate:(float)arg1 ;
-(id)initWithJsonResource:(id)arg1 domainMin:(float)arg2 domainMax:(float)arg3 rangeMin:(float)arg4 rangeMax:(float)arg5 ;
-(id)initWithArray:(id)arg1 domainMin:(float)arg2 domainMax:(float)arg3 rangeMin:(float)arg4 rangeMax:(float)arg5 ;
-(float)rangeMin;
-(float)rangeMax;
-(void)setDomainMin:(float)arg1 ;
-(void)setDomainMax:(float)arg1 ;
-(void)setRangeMin:(float)arg1 ;
-(void)setRangeMax:(float)arg1 ;
@end

