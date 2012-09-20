/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSMutableDictionary;

@interface TISweepSource : NSObject  {
    NSMutableDictionary *debugValues;
    int stepCount;
}

@property(readonly) NSMutableDictionary * debugValues;
@property int stepCount;

+ (id)sharedInstance;

- (void)setStepCount:(int)arg1;
- (int)stepCount;
- (BOOL)finished;
- (void)advanceSweep;
- (id)sweepStateValues;
- (id)sweepStateHeader;
- (void)addValue:(id)arg1 withValue:(float)arg2;
- (void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3;
- (id)debugValues;
- (void)dealloc;

@end